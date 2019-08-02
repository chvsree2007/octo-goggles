# insmod lkm_example.ko
/*This will print the major number, Now create a node using the Major number*/

# mknod /dev/lkm_example c MAJOR 0
# cat /dev/lkm_example
