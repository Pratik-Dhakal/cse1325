#ifndef __MAINWIN_H
#define __MAINWIN_H

#include <gtkmm.h>
#include "store.h"

class Mainwin : public Gtk::Window {
    public:
        Mainwin();
        virtual ~Mainwin();
    protected:
        void on_new_store_click(bool untitled = false); // Create a new store
        void on_save_click();          // Save to existing filename
        void on_save_as_click();       // Save to a selected file
        void on_open_click();          // Open the selected file
        void on_new_customer_click();  // --------------------------
        void on_new_order_click();     //---------------------------
        void on_new_tool_click();      // Create a new tool product
        void on_new_plant_click();     // Create a new plant product
        void on_new_mulch_click();     // Create a new mulch product
        void on_view_products_click(); // Update the display
        void on_view_customers_click();//---------------------------
        void on_view_orders_click();   //---------------------------
        void on_about_click();         // Display the About dialog
        void on_quit_click();          // Exit the program
        
    private:
        int get_int(std::string prompt);
        double get_double(std::string prompt);
        std::string get_string(std::string prompt);
        
        Store* store;               // The currently active store
        Gtk::Label* display;        // Status message display
        Gtk::Label* msg;
        std::string filename;       // Default filename
};
#endif 

