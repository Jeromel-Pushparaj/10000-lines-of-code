const secp = require("ethereum-cryptography/secp256k1");
const { keccak256 } = require("ethereum-cryptography/keccak");

function getAddress(publicKey) {
    const fR = publicKey.slice(1);
    const kHash = keccak256(fR);
    return kHash.slice(-20);
}

module.exports = getAddress;