    #include <gtk/gtk.h>
    #include <string.h>

    char arr[50],arr2[50];
    int state_of_rad1=0,state_of_rad2=0;
    int musicselected,textselected;

    static void open_dialog(GtkWidget* button, gpointer window)
    {
        GtkWidget *dialog;
        dialog = gtk_file_chooser_dialog_new("Choose a file", GTK_WINDOW(window), GTK_FILE_CHOOSER_ACTION_OPEN, GTK_STOCK_OK, GTK_RESPONSE_OK, GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL, NULL);
        gtk_widget_show_all(dialog);
        gtk_file_chooser_set_current_folder(GTK_FILE_CHOOSER(dialog), g_get_home_dir());
        gint resp = gtk_dialog_run(GTK_DIALOG(dialog));

        if(resp == GTK_RESPONSE_OK)
        {
            strcpy(arr,gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(dialog)));
            strcpy(arr2,gtk_file_chooser_get_current_folder(GTK_FILE_CHOOSER(dialog)));
        }
        else
            g_print("You pressed Cancel\n");
        gtk_widget_destroy(dialog);
    }

    char *intilizeitall(int argc, char* argv[]){

        gtk_init(&argc, &argv);
        GtkWidget *window, *button,*label;
        window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
        g_signal_connect(window, "delete-event", G_CALLBACK(gtk_main_quit), NULL);

        gchar *str = "<b >FILE CATEGORIZATION </b>";
        label = gtk_label_new(NULL);
        gtk_label_set_markup(GTK_LABEL(label), str);

        button = gtk_button_new_with_label("Click me");
        g_signal_connect(button, "clicked", G_CALLBACK(open_dialog), window);

        GtkWidget *box = gtk_vbox_new (FALSE, 5);
        gtk_box_pack_start (GTK_BOX (box), label, TRUE, TRUE, 0);
        gtk_box_pack_start (GTK_BOX (box), button, TRUE, TRUE, 0);

        gtk_container_set_border_width(GTK_CONTAINER(window), 200);
        
        gtk_container_add (GTK_CONTAINER (window), box);

        gtk_widget_show_all(window);
        gtk_main();

        return arr2;
    }
