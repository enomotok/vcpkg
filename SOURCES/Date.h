// 日付クラスDate（第1版：ヘッダー部）--//
class Date {
    int y ; //西暦年
    int m ; //月
    int d ; //日

public:
    Date(int yy,int mm,int dd); //コンストラクタ
    int year(){return y;}       //年を返す
    int monnth(){return m;}     //月を返す
    int day(){return d;}        //日を返す
};