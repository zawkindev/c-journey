#include <stdio.h>
#include <string.h>

typedef struct {
  char stereotype[20];
  char name[20];
  int age;
} waifu;

typedef struct {
  waifu waifu;
  int age;
  char name[20];
} me;

void set_megumi(me *me) {
  me->waifu.age = 18;
  stpcpy(me->waifu.name, "Megumi");
  stpcpy(me->waifu.stereotype, "alldere");
}

int main() {
  me otabek = {.waifu = {.age = 18, .name = "Asuna", .stereotype = "yandere"},
               .name = "Otabek"};
  set_megumi(&otabek);

  waifu my_waifus[2] = {{.age = 22, .name = "Mizuhara"},
                        {.age = 19, .name = "Asuna"}};

  for (int i = 0; i < 2; i++) {
    printf("age: %d\nname: %s\n\n", my_waifus[i].age, my_waifus[i].name);
  }

  printf("name: %s\n", otabek.waifu.name);

  return 0;
}
