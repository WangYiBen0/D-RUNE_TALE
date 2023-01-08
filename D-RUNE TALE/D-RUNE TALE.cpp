// D-RUNE_TALE.cpp : 定义应用程序的入口点。
//

#include <graphics.h>

int W = 640;
int H = 480;

enum { Esc = 1, Up = 2, Down = 4, Left = 8, Right = 16, Click = 32, DoubleClick = 64, RightClick = 128 }
msg;

class Room
{
private:
    int w, h;
    struct Exit
    {
        int x, y;
        int room_number;
    };
    Exit* exit;
public:
    Room(int rw = W, int rh = H, int exitnum = 4)
    {
        w = rw;
        h = rh;
        exit = new Exit[exitnum];
    }
}rooms[3];

int mouseX, mouseY;

inline void init();
inline void updata();
inline void clean();

int APIENTRY WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
    init();
    while (1)
    {
        updata();
    }
    clean();
    return 0;
}

inline void init()
{
    //初始化画布
    initgraph(W, H, 0);
    //加载字体资源
    AddFontResourceEx(L"Font\\Comic-Sans.ttf", FR_PRIVATE, 0);           //Comic Sans MS
    AddFontResourceEx(L"Font\\Determination.otf", FR_PRIVATE, 0);        //Determination Mono
    AddFontResourceEx(L"Font\\MonsterFriend.otf", FR_PRIVATE, 0);        //Monster Friend Back
    AddFontResourceEx(L"Font\\Papyrus-Regular.ttf", FR_PRIVATE, 0);      //Papyrus
    AddFontResourceEx(L"Font\\Webdings.ttf", FR_PRIVATE, 0);             //Webdings
    AddFontResourceEx(L"Font\\Wingdings.ttf", FR_PRIVATE, 0);            //Wingdings
    AddFontResourceEx(L"Font\\Wingdings2.ttf", FR_PRIVATE, 0);           //Wingdings 2
    AddFontResourceEx(L"Font\\Wingdings3.ttf", FR_PRIVATE, 0);           //Wingdings 3
    AddFontResourceEx(L"Font\\方正基础像素体.ttf", FR_PRIVATE, 0);        //方正基础像素
    AddFontResourceEx(L"Font\\方正卡通简体.ttf", FR_PRIVATE, 0);          //方正卡通简体
    AddFontResourceEx(L"Font\\方正少儿简体.ttf", FR_PRIVATE, 0);          //方正少儿简体
    //TO DO
}

inline void updataWithoutInput();
inline void updataWithInput();

inline void updata()
{
    updataWithInput();
    updataWithoutInput();
}

inline void clean()
{
    //TO DO
    //释放字体资源
    RemoveFontResourceEx(L"Font\\Comic-Sans.ttf", FR_PRIVATE, 0);        //Comic Sans MS
    RemoveFontResourceEx(L"Font\\Determination.otf", FR_PRIVATE, 0);     //Determination Mono
    RemoveFontResourceEx(L"Font\\MonsterFriend.otf", FR_PRIVATE, 0);     //Monster Friend Back
    RemoveFontResourceEx(L"Font\\Papyrus-Regular.ttf", FR_PRIVATE, 0);   //Papyrus
    RemoveFontResourceEx(L"Font\\Webdings.ttf", FR_PRIVATE, 0);          //Webdings
    RemoveFontResourceEx(L"Font\\Wingdings.ttf", FR_PRIVATE, 0);            //Wingdings
    RemoveFontResourceEx(L"Font\\Wingdings2.ttf", FR_PRIVATE, 0);           //Wingdings 2
    RemoveFontResourceEx(L"Font\\Wingdings3.ttf", FR_PRIVATE, 0);           //Wingdings 3
    RemoveFontResourceEx(L"Font\\方正基础像素体.ttf", FR_PRIVATE, 0);     //方正基础像素
    RemoveFontResourceEx(L"Font\\方正卡通简体.ttf", FR_PRIVATE, 0);       //方正卡通简体
    RemoveFontResourceEx(L"Font\\方正少儿简体.ttf", FR_PRIVATE, 0);       //方正少儿简体
    //关闭画布
    closegraph();
}

inline bool is_key_down(int vkey)
{
    return GetAsyncKeyState(vkey) & 0x8000;
}

inline void updataWithInput()
{
    //TO DO
    ;
}

inline void show();

inline void updataWithoutInput()
{
    //TO DO
    show();
}

inline void show()
{
    cleardevice();
    BeginBatchDraw();
    //TO DO
    settextstyle(30, 0, L"Comic Sans MS");
    outtextxy(0,   0, _T("D-rune tale --Comic Sans MS"));
    settextstyle(30, 0, L"Determination Mono");
    outtextxy(0,  30, _T("D-rune tale --Determination Mono"));
    settextstyle(30, 0, L"Monster Friend Back");
    outtextxy(0,  60, _T("D-rune tale --Monster Friend Back"));
    settextstyle(30, 0, L"Papyrus");
    outtextxy(0,  90, _T("D-rune tale --Papyrus"));
    settextstyle(30, 0, L"Webdings");
    outtextxy(0, 120, _T("D-rune tale --Webdings"));
    settextstyle(30, 0, L"Wingdings");
    outtextxy(0, 150, _T("D-rune tale --Wingdings"));
    settextstyle(30, 0, L"Wingdings 2");
    outtextxy(0, 180, _T("D-rune tale --Wingdings 2"));
    settextstyle(30, 0, L"Wingdings 3");
    outtextxy(0, 210, _T("D-rune tale --Wingdings 3"));
    settextstyle(30, 0, L"方正基础像素");
    outtextxy(0, 240, _T("D符文传说 --方正基础像素"));
    settextstyle(30, 0, L"方正卡通简体");
    outtextxy(0, 270, _T("D符文传说 --方正卡通简体"));
    settextstyle(30, 0, L"方正少儿简体");
    outtextxy(0, 300, _T("D符文传说 --方正少儿简体"));
    FlushBatchDraw();
}
