#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION(" module à intégrer soon");  
MODULE_AUTHOR("COueek");
MODULE_LICENSE("WTF");
static int prout_init(void)
{
    printk("yo mec");
    return 0;
}

static void prout_exit(void)
{
    printk("bye bye \n");
}

module_init(prout_init);
module_exit(prout_exit);

