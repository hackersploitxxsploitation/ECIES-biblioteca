#Esquema de Criptografia assimetrica baseda no padrão ECIES usando o hash SHA512   como funçao kdf 
//Detalhes tecnicos temos 2 funçoes principais aqui

1)
VOID EncryPMessage(BYTE *pubket,BYTE *buffer)
pubket:nossa chave publica
buffer:buffer contendo a mensagem a ser criptografada

2)

VOID DenCryPMessage(BYTE *privkey,BYTE *buffer,BYTE *pubkey)
privkey:sua chave privada 
buffer:buffer a ser descriptografado
pubkey:chave publica conhecida pelos ambos os lados

documentation in English
#Asymmetric encryption scheme based on the ECIES standard using the SHA512 hash as kdf function
1-en)
VOID EncryPMessage(BYTE *pubket,BYTE *buffer)
pubket:our public key
buffer:buffer containing an encrypted message

two)

2 -en)VOID DenCryPMessage(BYTE *private key, BYTE *buffer, BYTE *pubkey)
private key: your private key
buffer:buffer to be described
pubkey: public key known to both sides