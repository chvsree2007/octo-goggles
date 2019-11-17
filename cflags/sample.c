#include <linux/kernel.h>
#include <linux/module.h>

static int sample_init(void)
{
	printk(KERN_INFO "%s: init function\n",__func__);
#ifdef CONDITION
	printk(KERN_INFO "%s: init function - conditional print\n",__func__);
#endif
	return 0;
}	

static void sample_exit(void)
{
	printk(KERN_INFO "%s: exit function\n", __func__);
#ifdef CONDITION
	printk(KERN_INFO "%s: exit function - conditional print\n", __func__);
#endif
}

module_init(sample_init);
module_exit(sample_exit);
MODULE_DESCRIPTION("Conditional compilation");
MODULE_AUTHOR("V Sreekanth Chintada <chvsree2007@gail.com>");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.0.1");

