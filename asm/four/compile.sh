mkdir $1-asm # cria pasta com o arquivo.asm
sleep 1 # morre por 1 segundo
cp $1 $1-asm # copia o arquivo pra dentro
cd $1-asm # entra na pasta
sleep 1 # morre por 1 segundo....
nasm -f elf64 $1
sleep 1 # morre por 1 segundo....
ld -s -o $2 $2.o 
rm -rf *.o
sleep 1 # morre por 1 segundo....
clear
./$2

