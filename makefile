SDCCCFLAGS = -mmcs51 --nooverlay --noinduction --verbose --debug -V --std-sdcc89 --model-small

ASLINKFLAGS = --iram-size 128 --xram-size 32000 --code-size 4096 --xram-loc 0 

all:    main.hex
%.rel :     %.c
	sdcc    $(SDCCCFLAGS)   -c  $<  

main.hex:   main.c main.rel engine.c engine.rel
	sdcc $(SDCCCFLAGS)  $(ASLINKFLAGS)  main.rel    engine.rel 
