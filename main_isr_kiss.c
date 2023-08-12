#include "asf.h"

int g_cnt = 0;
char g_str[10];
int batata;
int btn_pressed = 0; // Flag botão

// This code creates a progress bar on an OLED screen that
// increases when the button is pressed.
void btn_callback(void) {
  //printf("btn pressed \n");
  btn_pressed = 1;  // seta botão
}

void main(void) {
  // ...

  batata = batata + 1;
  while (1) {
    if(btn_flag){
      if (g_cnt >= 8){
        g_cnt = 0;
      } else {
        g_cnt ++;
      }
      for (i = 0; i < g_cnt; i++) {
        g_str[i] = '*';
        //g_str[i + 1] = NULL;

      }
      delay_ms(50);
      gfx_mono_draw_string(g_str, 0, 0, &sysfont);
      btn_pressed = 0;
    }

  }
}
