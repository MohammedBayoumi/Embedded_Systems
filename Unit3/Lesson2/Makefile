#@copyright : Bayoumi
learn.bin : uart.c app.c startup.s
	  arm-none-eabi-as.exe -mcpu=arm926ej-s startup.s -o startup.o
	  arm-none-eabi-gcc.exe -c -g -I . -mcpu=arm926ej-s -I . uart.c -o uart.o
	  arm-none-eabi-gcc.exe -c -g -I . -mcpu=arm926ej-s -I . app.c -o app.o
	  arm-none-eabi-ld.exe -T linker_script.ld -Map=output.map app.o uart.o startup.o -o learn.elf
	  qemu-system-arm -M versatilepb -m 128M -nographic -kernel learn.bin



 clean :
      rm -rf *.o *~
     @echo "Every thing clean"	  
	 