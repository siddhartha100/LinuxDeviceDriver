obj-m += memory.o

all:
	make -j2 CONFIG_DEBUG_SECTION_MISMATCH=y -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -j2 CONFIG_DEBUG_SECTION_MISMATCH=y -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
