 #include <gtk/gtk.h>
    #include <string.h>

    char arr[50],arr2[50];
    int state_of_rad1=0,state_of_rad2=0;
    int musicselected,textselected;


    int musicss(){
    return musicselected;
    }

    int textss(){
    return textselected;
    }

    void combo_changed (GtkWidget *wid, gpointer ptr)
    {
    int sel = gtk_combo_box_get_active (GTK_COMBO_BOX (wid));
    char *selected = gtk_combo_box_text_get_active_text (
    GTK_COMBO_BOX_TEXT (wid));
    printf ("The value of the combo is %d %s\n", sel, selected);
    musicselected=sel;

   }

    void combo_changed2 (GtkWidget *wid, gpointer ptr)
    {
    int sel = gtk_combo_box_get_active (GTK_COMBO_BOX (wid));
    char *selected = gtk_combo_box_text_get_active_text (
    GTK_COMBO_BOX_TEXT (wid));
    printf ("The value of the combo is %d %s\n", sel, selected);
    textselected=sel;

   }



    static void open_dialog(GtkWidget* button, gpointer window)
    {
        GtkWidget *dialog;
        dialog = gtk_file_chooser_dialog_new("Choose a file", GTK_WINDOW(window), GTK_FILE_CHOOSER_ACTION_OPEN, GTK_STOCK_OK, GTK_RESPONSE_OK, GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL, NULL);
        gtk_widget_show_all(dialog);
        gtk_file_chooser_set_current_folder(GTK_FILE_CHOOSER(dialog), g_get_home_dir());
        gint resp = gtk_dialog_run(GTK_DIALOG(dialog));



        if(resp == GTK_RESPONSE_OK){
            strcpy(arr,gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(dialog)));
            strcpy(arr2,gtk_file_chooser_get_current_folder(GTK_FILE_CHOOSER(dialog)));
            //g_print("%s\n", gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(dialog)));
            //g_print("%s\n", gtk_file_chooser_get_current_folder(GTK_FILE_CHOOSER(dialog)));
        }
        else
            g_print("You pressed Cancel\n");
        gtk_widget_destroy(dialog);


    }
