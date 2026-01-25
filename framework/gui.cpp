#include "headers/includes.h"

void c_gui::render()
{
	gui->initialize();
	gui->set_next_window_size(SCALE(elements->window.size));
	gui->begin(elements->window.name, nullptr, window_flags_no_scrollbar | window_flags_no_scroll_with_mouse | window_flags_no_bring_to_front_on_focus | window_flags_no_focus_on_appearing | window_flags_no_background | window_flags_no_decoration);
	{
		gui->set_style();
		gui->draw_decorations();
	}
	gui->end();
}