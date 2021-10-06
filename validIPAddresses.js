function validIPAddresses(string) {

    const validIPAddress = [];

    for (let i = 0; i < Math.min(string.length, 4); i++) {
        const ipAddressParts = ['', '', '', ''];

        ipAddressParts[0] = string.slice(0, i);

        if (!validPart(ipAddressParts[0])) continue;

        for (let j = i + 1; j < i + Math.min(string.length - i, 4); j++) {
            ipAddressParts[1] = string.slice(i, j);
            if (!validPart(ipAddressParts[1])) continue;

            for (let k = j + 1; k < j + Math.min(string.length - j, 4); k++) {
                ipAddressParts[2] = string.slice(j, k);
                ipAddressParts[3] = string.slice(k);

                if (validPart(ipAddressParts[2]) && validPart(ipAddressParts[3]))
                    validIPAddress.push(ipAddressParts.join('.'));
            }
        }
    }

    return validIPAddress;
}

const validPart = (string) => {
    let ipNumber = parseInt(string);
    if (ipNumber > 255) return false;
    // Check for trailing zeros
    return string.length === ipNumber.toString().length;
}

// Do not edit the line below.
exports.validIPAddresses = validIPAddresses;
