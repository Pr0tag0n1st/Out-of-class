#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
int main() {
	al_init();
	al_init_font_addon();
	al_init_ttf_addon();
	ALLEGRO_DISPLAY*display = NULL;
	al_create_display(840, 640);
	al_clear_to_color(al_map_rgb(0, 0, 0));
	ALLEGRO_FONT*font = al_load_ttf_font("NK_Monotype.ttf", 24, 0);
	al_draw_text(font, ALLEGRO_COLOR(al_map_rgb(20, 255, 20)), 420, 320, 0, "Hello, Allegro");
	al_flip_display();
	al_rest(5.0); 
}