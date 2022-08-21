#include <isa.h>
#include <memory/paddr.h>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
static const uint32_t img [] = {
  0x800002b7,  // lui t0,0x80000
  0x0002a023,  // sw  zero,0(t0)
  0x0002a503,  // lw  a0,0(t0)
  0x0000006b,  // nemu_trap
};

static void restart() {
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;   //将pc的初值设为程序启动的初始地址

  /* The zero register is always 0. */
  cpu.gpr[0]._32 = 0;
}

void init_isa() {
  /* Load built-in image. */
  /*将用户程序复制到虚拟内存地址所映射的物理内存地址种，guest_to_host函数完成了映射*/
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  /* Initialize this virtual computer system. */
  restart();
}
