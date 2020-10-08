Última lista do primeiro bimestre – valor 4 pontos
Para todas as questões você deverá mostrar o desenvolvimento das questões, bem como os cálculos realizados. Questões sem apresentação de desenvolvimento serão desconsideradas.

1) Uma rede de computadores foi organizada com uma máscara de subrede da classe C, mas tomando 6 bits emprestado. Calcule qual será a nova máscara de sub-rede?
x.x.x.x/18

|A|B|C|D|
|-|-|-|-|
|11111111|11111111|11**000000**|**00000000**|
|255|255|192|0|

2) Considerando a máscara de subrede 255.255.248.0, calcule corretamente a quantidadede sub-redes e hosts possíveis com a máscara apresentada acima.


>8*256=2048 IPS 
>Menos IP de Rede e Broadcast = 2046

3) Em uma rede IPv4, para criar subredes com 30 Ips válidos, deveremos utilizar qual máscara de sub-redes?
>/27
>__255.255.255.224__
32 bits no TOTAL -  
Ao buscar 32 IPS, a gente converte pra base 2 e temos 2^5, Onde o 5 equivale a casas de bits. 32 casas de bits MENOS 5 = 27 bits = 255.255.255.224
4) Uma máscara de subrede também pode ser representada utilizando a notação CIDR. A notação CIDR “/20” é equivalente a qual máscara de sub-rede?

|A|B|C|D|
|-|-|-|-|
|11111111|11111111|11110000|00000000|
|255|255|240|0|

5) Para um microcomputador que utiliza a configuração 128.138.243.100/26 de subrede, qual endereço é utilizado como endereço de rede e endereço de broadcast?

|A|B|C|D|
|-|-|-|-|
|11111111|11111111|11111111|11000000|
|255|255|255|192|
|128|138|243|64|
|128|138|243|127|


6) Seja S uma determinada sub-rede TCP/IP formada pelos equipamentos abaixo.
Estação A, Endereço IP: 192.168.1.21/29
Roteador B, Endereço IP: 192.168.1.22/29
Quantas novas estações podem ser conectadas a S?

8 IPS
**16**-17-18-19-20-A.B.**23**
4 novas estações 17 ao 20

7) Para otimizar a utilização dos endereços IP, uma rede classe C passou a usar o modo de endereçamento CIDR, sendo subdividida em sub-redes /27. Calcule a quantidade de sub-redes e a quantidade de hosts roteáveis por rede.

/24 256 IPS
/27 8 SUBREDES de 32 IPS - 30HOSTS


8) Uma rede /24 usando modo de endereçamento CIDR pode ser subdividida em quantas sub-redes/29 e totalizar quantos IPs configuráveis?

/24 256 ips
/29 8 IPS - 6 hosts - 32 Subredes
