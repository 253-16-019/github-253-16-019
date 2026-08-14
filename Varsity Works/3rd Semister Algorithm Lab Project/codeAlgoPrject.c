#include <stdio.h>
#include <string.h>

struct Emergency{
    int id;
    char patientName[50];
    char location[50];
    char type[50];
    char date[30];
    int severity;
    char hospital[50];
};

struct Emergency e[100];
int count = 0;
int nextID = 1;

int loadFile();
int saveFile();
int addEmergency();
int viewEmergency();
int searchEmergency();
int sortBySeverity();
int sortByTime();
int deleteEmergency();

int loadFile(){
    FILE *fp;
    fp = fopen("loading.dat", "rb");
    if (fp == NULL){    
        return 0;
    }
    while(fread(&e[count], sizeof(struct Emergency), 1, fp)){
        if (e[count].id >= nextID)
            nextID = e[count].id + 1;

        count++;
    }
    fclose(fp);
    return 1;
}

int saveFile(){
    FILE *fp;
    fp = fopen("loading.dat", "wb");
    if (fp == NULL){
        printf("File Error!\n");
        return 0;
    }
    fwrite(e, sizeof(struct Emergency), count, fp);
    fclose(fp);
    return 1;
}


int main(){
    int choice;
    loadFile();
    while (1){
        printf("\t\t\n SMART EMERGENCY HEALTHCARE SYSTEM\n");
        printf("\t\t\n ---------------------------------\n");

        printf("\n1. Add Emergency Request");
        printf("\n2. View Emergency Requests");
        printf("\n3. Search Emergency Request");
        printf("\n4. Sort by Severity");
        printf("\n5. Sort by Time");
        printf("\n6. Delete Emergency Request");
        printf("\n7. Exit");

        printf("\n\nEnter Choice : ");
        scanf("%d", &choice);

        if (choice == 1)
            addEmergency();

        else if (choice == 2)
            viewEmergency();

        else if (choice == 3)
            searchEmergency();

        else if (choice == 4){
            sortBySeverity();
            viewEmergency();
        }

        else if (choice == 5){
            sortByTime();
            viewEmergency();
        }

        else if (choice == 6)
            deleteEmergency();

        else if (choice == 7){
            saveFile();
            printf("\nData Saved Successfully.\n");
            printf("Thank You.\n");
            break;
        }
        else{
            printf("\nInvalid Choice!\n");
        }
    }
    return 0;
}

int addEmergency(){
    e[count].id = nextID++;

    printf("\nEnter Patient Name : ");
    scanf(" %[^\n]", e[count].patientName);

    printf("Enter Location : ");
    scanf(" %[^\n]", e[count].location);

    printf("Enter Emergency Type : ");
    scanf(" %[^\n]", e[count].type);

    printf("Enter Date & Time (YYYY-MM-DD HH:MM): ");
    scanf(" %[^\n]", e[count].date);

    printf("Enter Severity (1 t0 issa) : ");
    scanf("%d", &e[count].severity);

    printf("Enter Assigned Hospital : ");
    scanf(" %[^\n]", e[count].hospital);
    count++;
    saveFile();
    printf("\nEmergency Request Added Successfully.");
    return 1;
}

int viewEmergency(){
    int i;
    if (count == 0){
        printf("\nNo Emergency Request Found.\n");
        return 0;
    }
    for (i = 0; i < count; i++){
        printf("\n==============================");

        printf("\nEmergency ID : %d", e[i].id);
        printf("\nPatient Name : %s", e[i].patientName);
        printf("\nLocation : %s", e[i].location);
        printf("\nEmergency Type : %s", e[i].type);
        printf("\nDate & Time : %s", e[i].date);
        printf("\nSeverity : %d", e[i].severity);
        printf("\nHospital : %s", e[i].hospital);

        printf("\n==============================\n");
    }
    return count;
}

int searchEmergency(){
    int choice;

    printf("\nSearch By");
    printf("\n1. Emergency ID");
    printf("\n2. Patient Name");
    printf("\nEnter Choice : ");
    scanf("%d", &choice);

    if (choice == 1){
        int id;
        int found = 0;

        printf("Enter Emergency ID : ");
        scanf("%d", &id);

        for (int i = 0; i < count; i++){
            if (e[i].id == id){
                printf("\nEmergency Found\n");

                printf("\nID : %d", e[i].id);
                printf("\nPatient Name : %s", e[i].patientName);
                printf("\nLocation : %s", e[i].location);
                printf("\nEmergency Type : %s", e[i].type);
                printf("\nDate & Time : %s", e[i].date);
                printf("\nSeverity : %d", e[i].severity);
                printf("\nHospital : %s\n", e[i].hospital);

                found = 1;
            }
        }

        if (found == 0){
            printf("\nEmergency Not Found.\n");
        }
    }

    else if (choice == 2){
        char name[50];
        int found = 0;

        printf("Enter Patient Name : ");
        scanf(" %[^\n]", name);

        for (int i = 0; i < count; i++){
            int j = 0;
            int k = 0;
            int match = 0;

            while (e[i].patientName[j] != '\0' && name[k] != '\0'){
                char a = e[i].patientName[j];
                char b = name[k];

                if (a >= 'A' && a <= 'Z')
                    a = a + 32;

                if (b >= 'A' && b <= 'Z')
                    b = b + 32;

                if (a != b)
                    break;

                j++;
                k++;
            }

            if (name[k] == '\0')
                match = 1;

            if (match == 1){
                printf("\nEmergency Found\n");

                printf("\nID : %d", e[i].id);
                printf("\nPatient Name : %s", e[i].patientName);
                printf("\nLocation : %s", e[i].location);
                printf("\nEmergency Type : %s", e[i].type);
                printf("\nDate & Time : %s", e[i].date);
                printf("\nSeverity : %d", e[i].severity);
                printf("\nHospital : %s\n", e[i].hospital);

                found = 1;
            }
        }

        if (found == 0){
            printf("\nEmergency Not Found.\n");
        }
    }

    else{
        printf("\nInvalid Choice.\n");
    }

    return 1;
}

int sortBySeverity(){
    int i, j;
    struct Emergency key;

    for (i = 1; i < count; i++){
        key = e[i];
        j = i - 1;

        while (j >= 0 && e[j].severity < key.severity){
            e[j + 1] = e[j];
            j--;
        }
        e[j + 1] = key;
    }
    printf("\nEmergency Requests Sorted by Severity.\n");
    return 1;
}

int sortByTime(){
    int i, j;
    struct Emergency temp;

    for (i = 0; i < count - 1; i++){
        for (j = 0; j < count - i - 1; j++){
            if (strcmp(e[j].date, e[j + 1].date) > 0){
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
    printf("\nEmergency Requests Sorted by Time.\n");
    return 1;
}

int deleteEmergency(){
    int id;
    int found = 0;

    printf("\nEnter Emergency ID : ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++){
        if (e[i].id == id){
            for (int j = i; j < count - 1; j++){
                e[j] = e[j + 1];
            }
            count--;
            saveFile();
            printf("\nEmergency Deleted Successfully.\n");
            found = 1;
            break;
        }
    }

    if (found == 0){
        printf("\nEmergency ID Not Found.\n");
    }
    return 1;
}
