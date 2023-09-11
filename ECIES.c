#include "ECIES.h"
#include <bcrypt.h>
#include <Shlwapi.h>
   const uint8_t C[32] = { 9 };
BYTE* generatPrivateKey(BYTE *key){
    HCRYPTPROV  hCryptProv;
 memset (key, 0, 32);


 if( RtlGenRandom(key,32)==FALSE){
    printf("erro");
}


return(key);
VOID EncryPMessage(BYTE *pubket,BYTE *buffer){
BYTE pbDataSecrete[ 32];
BYTE pbDataPublic[ 32];
BYTE pbShare[ 32];
BYTE pbShareDest[ 32];
pbDataSecrete[0] &= 248;
                    pbDataSecrete[31] &= 127;
                    pbDataSecrete[31] |= 64;
                    curve25519_donna(&pbDataPublic,   &pbDataSecrete[ 32], &C);
                    curve25519_donna(&pbShare,   &pbDataSecrete[ 32], pubket);
                   //SHA512Hash((uint8_t)&pbShare,32);
                   memset(&pbDataSecrete,0,32);

BYTE k[32];
sha512(pbShare,32,k);//essa e  sua chave privada feita  pelo shared secredt façaum hash
//use o algortmot criptografico da sua abaixo tera uma breve explicaçao do ECDH





}


VOID DenCryPMessage(BYTE *privkey,BYTE *buffer,BYTE *pubkey){

BYTE pbkey_recptor[32];
BYTE shared[32];
   curve25519_donna(&shared,&privkey,&pubkey);//nosso segredo compartilhado
   
    BYTE k[32];
	sha512(shared,32,k);
	//aqui voce usa o algoritmo da sua escolha  AES xor 





}// A logica e a mesma mas o share secret e o mesmo para o recptor e emissor  