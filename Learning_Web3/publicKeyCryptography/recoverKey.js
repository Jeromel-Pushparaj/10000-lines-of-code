const secp = require("ethereum-cryptography/secp256k1");
const hashMessage = require("./hashMessage");

async function recoverKey(message, signature, recoveryBit) {
    const msHash = hashMessage(message);
    return secp.recoverPublicKey(msHash, signature, recoveryBit);
}

module.exports = recoverKey;