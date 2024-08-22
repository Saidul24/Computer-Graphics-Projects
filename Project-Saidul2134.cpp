#include <graphics.h>
#include <iostream>
using namespace std;


void drawMyName();
void drawEmoji();
void drawFish();
void drawFlag();
void drawMovingFootball();
void displayMenu();

//1.Name:
void drawMyName() {
    initwindow(800, 600, "Draw My Name");

    setcolor(RED);

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);

    outtextxy(100, 200, "SAIDUL HASAN (2134)");
}

//2.Emoji:
void drawEmoji() {
    initwindow(600, 600, "Draw Emoji");

    setbkcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    cleardevice();

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(250, 200, 100);
    floodfill(250, 200, YELLOW);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    circle(210, 170, 10);
    floodfill(210, 170, BLACK);

    circle(290, 170, 10);
    floodfill(290, 170, BLACK);

    arc(250, 250, 180, 360, 40);

    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    ellipse(290, 210, 0, 360, 10, 20);
    floodfill(290, 210, BLUE);

}

//3.Fish:
void drawFish()

{
    initwindow(1024,1024,"line");

    setcolor(WHITE);
    ellipse(697,284,280,280,6,8);
    ellipse(662,280,280,280,12,17);
    ellipse(681,253,280,280,8,11);
    ellipse(686,310,280,280,10,14);

    setcolor(YELLOW);
    ellipse(450,300,280,280,190,70);
    setfillstyle(1,LIGHTBLUE);
    floodfill(450,300,YELLOW);

    circle(533,300,30);
    line(565,243,515,275);
    line(510,321,565,357);
    setfillstyle(1,YELLOW);
    floodfill(533,300,YELLOW);
    floodfill(600,300,YELLOW);

    setcolor(WHITE);
    line(280,272,180,230);
    line(280,328,180,370);
    line(180,370,210,300);
    line(210,300,180,230);

    ellipse(450,300,280,280,190,70);
    setfillstyle(1,RED);
    floodfill(220,310,WHITE);

    setcolor(RED);
    line(490,232,370,150);
    line(370,150,435,230);
    line(435,230,490,232);
    setfillstyle(1,RED);
    floodfill(440,210,RED);

    line(490,367,370,440);
    line(370,440,440,370);
    line(440,370,490,367);
    setfillstyle(1,RED);
    floodfill(450,371,RED);

    setcolor(RED);
    ellipse(590,290,280,280,13,17);
    setfillstyle(1,RED);
    floodfill(590,290,RED);


}

//4.Flag:
void drawFlag() {
    initwindow(600, 600, "Draw Flag");

    setbkcolor(WHITE);
    cleardevice();

    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(100, 100, 400, 250);
    floodfill(150, 150, GREEN);

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(250, 175, 50);
    floodfill(250, 175, RED);

}

//5.Moving Football:
void drawFootball(int x, int y) {

    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    circle(x, y, 40);
    floodfill(x, y, WHITE);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    circle(x, y, 10);
    floodfill(x, y, BLACK);

    circle(x - 20, y - 20, 10);
    floodfill(x - 20, y - 20, BLACK);

    circle(x + 20, y - 20, 10);
    floodfill(x + 20, y - 20, BLACK);

    circle(x - 20, y + 20, 10);
    floodfill(x - 20, y + 20, BLACK);

    circle(x + 20, y + 20, 10);
    floodfill(x + 20, y + 20, BLACK);
}

void drawGround(int y) {
    setcolor(WHITE);
    line(0, y, getmaxx(), y);
}

void drawMovingFootball() {
    initwindow(804, 804, "Moving Football");

    setbkcolor(BLACK);
    cleardevice();

    int x = 50, y = 350;
    int groundY = 400;
    int max_x = getmaxx();

    while (x < max_x - 50) {
        cleardevice();

        drawGround(groundY);

        drawFootball(x, y);

        x += 5;

        delay(10);
    }

}

void displayMenu() {
    cout << "\n     Menu Card\n\n";
    cout << "  1. Draw My Name\n";
    cout << "  2. Draw An Emoji\n";
    cout << "  3. Draw Fish\n";
    cout << "  4. Draw A Flag\n";
    cout << "  5. Draw A Moving Football\n\n";
}

int main() {
    int choice;
    char drawMore;

    displayMenu();

    do {
        cout << "   Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                drawMyName();
                break;
            case 2:
                drawEmoji();
                break;
            case 3:
                drawFish();
                break;
            case 4:
                drawFlag();
                break;
            case 5:
                drawMovingFootball();
                break;
            default:
                cout << "Invalid choice, please select a valid option.\n";
                break;
        }

        cout << "   Do you want to draw another one? (y/n): ";
        cin >> drawMore;

        if (drawMore == 'y' || drawMore == 'Y') {
            cleardevice();
        }

    } while (drawMore == 'y' || drawMore == 'Y');

    return 0;
}
