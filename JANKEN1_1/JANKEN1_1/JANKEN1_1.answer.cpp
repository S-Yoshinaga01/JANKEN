// JANKEN1_1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    // rand()関数を使うための前準備。
    // 詳細は気にしなくていい。
    srand((unsigned int)time(NULL));

    // 敵の手を入力するための変数を用意
    int TekiNoTe;

    // コンピュータの手をランダムに決める。
    // (rand()関数の戻り値を3で割った余りをTekiNoTeに代入している。
    TekiNoTe = rand() % 3;

    // 自分の手を入力するための変数を用意する。
    int JibunNoTe;

    cout << "手を選んでください。0:グー　1:チョキ　2:パー\n";

    // 自分の手を選択する。
    // 数値を入力する。
    cin >> JibunNoTe;

    // 入力されたJinunNoTeに入っている数字に応じて処理を変える
    if (JibunNoTe == 0) {
        // 0が入力されたらグーを出す。
        cout << "プレイヤーの手はグー。\n";
    }
    else if (JibunNoTe == 1) {
        // 1が入力されていたらチョキを出す。
        cout << "プレイヤーの手はチョキ。\n";
    }
    else if (JibunNoTe == 2) {
        // 2が入力されたらパーを出す。
        cout << "プレイヤーの手はパー。\n";
    }
    else {
        // 0,1,2以外が入力されていたら
        cout << "何も入力していません。\n";
    }

    if (TekiNoTe == 0) {
        // 0が入力されたらグーを出す。
        cout << "対戦相手の手はグー。\n";
    }

    if (TekiNoTe == 1) {
        // 1が入力されていたらチョキを出す。
        cout << "対戦相手の手はチョキ。\n";
    }

    if (TekiNoTe == 2) {
        // 2が入力されたらパーを出す。
        cout << "対戦相手の手はパー。\n";
    }

    // 自分と相手の数値が同じ、出した手が同じということなので引き分け
    if (JibunNoTe == TekiNoTe) {
        cout << "引き分けです。\n";
    }

    // 自分がグーを出したとき、かつ相手がチョキなら
    if (JibunNoTe == 0 && TekiNoTe == 1) {
        cout << "あなたの勝ちです。\n";
    }

    // 自分がチョキを出したとき、かつ相手がパーなら
    if (JibunNoTe == 1 && TekiNoTe == 2) {
        cout << "あなたの勝ちです。\n";
    }

    // 自分がパーを出したとき、かつ相手がグーなら
    if (JibunNoTe == 2 && TekiNoTe == 0) {
        cout << "あなたの勝ちです。\n";
    }

    // 自分がグーを出したとき、かつ相手がパーなら
    if (JibunNoTe == 0 && TekiNoTe == 2) {
        cout << "あなたの負けです。\n";
    }

    // 自分がチョキを出したとき、かつ相手がグーなら
    if (JibunNoTe == 1 && TekiNoTe == 0) {
        cout << "あなたの負けです。\n";
    }

    // 自分がパーを出したとき、かつ相手がチョキなら
    if (JibunNoTe == 2 && TekiNoTe == 1) {
        cout << "あなたの負けです。\n";
    }
	return 0;
}