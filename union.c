#include <stdio.h>
#include <string.h>
typedef union {
  int age;
  char name[20];
} waifu;

typedef struct {
  int spells[20];
  union {
    int id_number;
    char nmi[18]; // national mage id
  } id;
} mage;

union messi {
  int age;
  char name[20];
};

union messi arr[3];

void set_name(waifu *ptr) { strcpy(ptr->name, "Megumi"); }

int main() {
  waifu my_waifu;
  mage freiren;

  waifu *wptr = &my_waifu;
  mage *mptr = &freiren;

  strcpy(freiren.id.nmi, "UW3219192");
  mptr->id.id_number = 47242;

  strcpy(my_waifu.name, "Asuna");
  my_waifu.age = 19;

  set_name(&my_waifu);

  printf("%s", my_waifu.name);
  printf("\n%d", wptr->age);
  printf("\nnmi: %s", freiren.id.nmi);
  printf("\nid_number: %d", freiren.id.id_number);
}
