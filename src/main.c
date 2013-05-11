#include "pebble_os.h"
#include "pebble_app.h"
#include "pebble_fonts.h"


#define MY_UUID { 0xBB, 0x6C, 0xF8, 0xDC, 0x46, 0x49, 0x4F, 0x9B, 0x81, 0xE1, 0x88, 0x9A, 0x19, 0x62, 0x98, 0x6B }
PBL_APP_INFO(MY_UUID,
             "Template App", "Kyle Hanis",
             1, 0, /* App version */
             DEFAULT_MENU_ICON,
             APP_INFO_STANDARD_APP);

Window window;


void handle_init(AppContextRef ctx) {
  (void)ctx;

  window_init(&window, "Hello World!");
  window_stack_push(&window, true /* Animated */);
}


void pbl_main(void *params) {
  PebbleAppHandlers handlers = {
    .init_handler = &handle_init
  };
  app_event_loop(params, &handlers);
 
	
}
