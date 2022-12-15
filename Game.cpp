#include <iostream>
#include <string>
#include <cstring>
#include <allegro5/keycodes.h>
#include <allegro5/keyboard.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <Windows.h>

using namespace std;

int start();
int inst();
int menu();

int width = 800;
int height = 600;
ALLEGRO_DISPLAY* window;
ALLEGRO_FONT* font;
ALLEGRO_EVENT_QUEUE* event_queue;
ALLEGRO_SAMPLE* cancion;

int main()
{
	al_init();
	
	al_init_font_addon();
	al_init_ttf_addon();
	al_install_mouse();
	al_init_image_addon();
	al_install_audio();
	al_init_acodec_addon();
	al_reserve_samples(16);

	window = al_create_display(width, height);
	font = al_load_font("TechnaSans-Regular", 50, 0);

	//Obtain X,Y (Screen Resolution)
	int width_w = GetSystemMetrics(SM_CXSCREEN);
	int height_w = GetSystemMetrics(SM_CYSCREEN);

	//Window
	al_set_window_title(window, "Nygma Code");
	al_set_window_position(window, width_w / 2 - width / 2, height_w / 2 - height / 2);
	cancion = al_load_sample("CancionMenu.mp3");
	al_play_sample(cancion, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
	//Events
	event_queue = al_create_event_queue();

	al_register_event_source(event_queue, al_get_mouse_event_source());

	menu();
	return 0;
}

						
int start()
{
	font = al_load_font("TechnaSans-Regular", 50, 0);
	int x = -1, y = -1;

	ALLEGRO_BITMAP* teclas = al_load_bitmap("Images/teclado.png");
	ALLEGRO_BITMAP* backg = al_load_bitmap("Images/escenario1.png");
	ALLEGRO_BITMAP* bomb = al_load_bitmap("Images/xBomb0.png");

	char Words[10] = { "FIGHT" };
	char Guessed[10] = {};

	while (true)
	{
		ALLEGRO_EVENT Evento;
		al_wait_for_event(event_queue, &Evento);
		al_clear_to_color(al_map_rgb(255, 255, 255));
		al_draw_bitmap(backg, 0, 0, 0);
		al_draw_bitmap(teclas, 0, 0, 0);
		al_draw_bitmap(bomb, 110, 100, 0);
		al_flip_display();
		if (Evento.type == ALLEGRO_EVENT_MOUSE_AXES || Evento.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
		{

			x = Evento.mouse.x;
			y = Evento.mouse.y;
			//fila 1
			if (x >= 30 && x <= 73 && y >= 430 && y <= 483 )
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "A");
					printf("%s", Guessed);
				}
			}
			if (x >= 83 && x <= 132 && y >= 430 && y <= 483)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "B");
					printf("%s", Guessed);
					
				}
			}
			if (x >= 144 && x <= 189 && y >= 430 && y <= 483)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "C");
					printf("%s", Guessed);
				}
			}
			if (x >= 202 && x <= 247 && y >= 430 && y <= 483)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "D");
					printf("%s", Guessed);
				}
			}
			if (x >= 261 && x <= 306 && y >= 430 && y <= 483)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "E");
					printf("%s", Guessed);
				}
			}
			if (x >= 318 && x <= 364 && y >= 430 && y <= 483)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "F");
					printf("%s", Guessed);
				}
			}
			if (x >= 377 && x <= 423 && y >= 430 && y <= 483)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "G");
					printf("%s", Guessed);
				}
			}
			if (x >= 435 && x <= 481 && y >= 430 && y <= 483)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "H");
					printf("%s", Guessed);
				}
			}
			if (x >= 493 && x <= 539 && y >= 430 && y <= 483)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "I");
					printf("%s", Guessed);
				}
			}
			if (x >= 551 && x <= 597 && y >= 430 && y <= 483)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "J");
					printf("%s", Guessed);
				}
			}
			if (x >= 609 && x <= 655 && y >= 430 && y <= 483)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "K");
					printf("%s", Guessed);
				}
			}
			if (x >= 667 && x <= 713 && y >= 430 && y <= 483)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "L");
					printf("%s", Guessed);
				}
			}
			if (x >= 726 && x <= 772 && y >= 430 && y <= 483)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "M");
					printf("%s", Guessed);
				}
			}
			//fila 2
			if (x >= 28 && x <= 73 && y >= 503 && y <= 556)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "N");
					printf("%s", Guessed);
				}
			}
			if (x >= 86 && x <= 131 && y >= 503 && y <= 556)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "O");
					printf("%s", Guessed);
				}
			}
			if (x >= 143 && x <= 189 && y >= 503 && y <= 556)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "P");
					printf("%s", Guessed);
				}
			}
			if (x >= 201 && x <= 247 && y >= 503 && y <= 556)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "Q");
					printf("%s", Guessed);
				}
			}
			if (x >= 260 && x <= 307 && y >= 503 && y <= 556)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "R");
					printf("%s", Guessed);
				}
			}
			if (x >= 317 && x <= 364 && y >= 503 && y <= 556)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "S");
					printf("%s", Guessed);
				}
			}
			if (x >= 377 && x <= 423 && y >= 503 && y <= 556)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "T");
					printf("%s", Guessed);
				}
			}
			if (x >= 434 && x <= 480 && y >= 503 && y <= 556)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "U");
					printf("%s", Guessed);
				}
			}
			if (x >= 493 && x <= 538 && y >= 503 && y <= 556)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "V");
					printf("%s", Guessed);
				}
			}
			if (x >= 550 && x <= 597 && y >= 503 && y <= 556)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "W");
					printf("%s", Guessed);
				}
			}
			if (x >= 608 && x <= 654 && y >= 503 && y <= 556)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "X");
					printf("%s", Guessed);
				}
			}
			if (x >= 666 && x <= 712 && y >= 503 && y <= 556)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "Y");
					printf("%s", Guessed);
				}
			}
			if (x >= 726 && x <= 772 && y >= 503 && y <= 556)
			{
				if (Evento.mouse.button & 1)
				{
					strcpy_s(Guessed, "Z");
					printf("%s", Guessed);
				}
			}
			//Enter
			if (x >= 553 && x <= 480 && y >= 342 && y <= 416)
			{
				if (Evento.mouse.button & 1)
				{
					printf("SI");
				}
			}
		}
	}
	
	return 1;
}

int inst()
{
	int x = -1, y = -1;
	
	ALLEGRO_BITMAP* backg = al_load_bitmap("Images/instruccion.png");

	while (true)
	{
		ALLEGRO_EVENT Evento;
		al_wait_for_event(event_queue, &Evento);
		al_clear_to_color(al_map_rgb(255, 255, 255));
		al_draw_bitmap(backg, 0, 0, 0);

		if (Evento.type == ALLEGRO_EVENT_MOUSE_AXES || Evento.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
		{

			x = Evento.mouse.x;
			y = Evento.mouse.y;

			if (x >= 489 && x <= 678 && y >= 460 && y <= 537)
			{
				if (Evento.mouse.button & 1)
				{
					menu();
				}
				
			}
		}
		al_flip_display();
	}
	return 1;
}

int menu()
{
	int x = -1, y = -1;

	ALLEGRO_BITMAP* menu_null = al_load_bitmap("images/menu.png");
	ALLEGRO_BITMAP* menu_start = al_load_bitmap("images/btnstart.png");
	ALLEGRO_BITMAP* menu_inst = al_load_bitmap("images/btninst.png");
	ALLEGRO_BITMAP* menu_exit = al_load_bitmap("images/btnexit.png");

	//Menu
	int botones[] = { 0 };

	while (true)
	{
		ALLEGRO_EVENT Evento;
		al_wait_for_event(event_queue, &Evento);

		al_clear_to_color(al_map_rgb(0, 0, 0));

		if (botones[0] == 0)
			al_draw_bitmap(menu_null, 0, 0, 0);
		if (botones[0] == 1)
			al_draw_bitmap(menu_start, 0, 0, 0);
		if (botones[0] == 2)
			al_draw_bitmap(menu_inst, 0, 0, 0);
		if (botones[0] == 3)
			al_draw_bitmap(menu_exit, 0, 0, 0);

		if (Evento.type == ALLEGRO_EVENT_MOUSE_AXES || Evento.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
		{

			x = Evento.mouse.x;
			y = Evento.mouse.y;

			if (x >= 222 && x <= 591 && y >= 233 && y <= 314)
			{
				botones[0] = 1;
				if (Evento.mouse.button & 1)
					start();
			}
			else
			{
				if (x >= 222 && x <= 591 && y >= 343 && y <= 418)
				{
					botones[0] = 2;
					if (Evento.mouse.button & 1)
						inst();
				}
				else
				{
					if (x >= 222 && x <= 588 && y >= 443 && y <= 522)
					{
						botones[0] = 3; 
						if (Evento.mouse.button & 1)
						{
							exit(-1);
						}
			
					}
					else
					{
						botones[0] = 0;
					}
				}
			}
			al_flip_display();
		}
	}
	return 0;
}