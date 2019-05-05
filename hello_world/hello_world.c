#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("Dual BSD/GPL");

static int init_hello(void){
	printk(KERN_INFO "init_module() called \n");
	printk("<1>Hello World! \n");
	return 0;
}

static void hello_exit(void){
	printk(KERN_INFO "cleanup_module() called \n");
	printk("<1>Bye \n");
}

module_init(init_hello);
module_exit(hello_exit);

