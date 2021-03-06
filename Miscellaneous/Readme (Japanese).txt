Alissa's PDF Thumbnail Trmmer
                                   2013-5-7  Alissa Sabre

******************************************************************
*                                                                *
*  Alissa's PDF Thumbnail Trimmer のインストールが成功したあと   *
*  も、相変わらずPDFの縮小版（サムネイル）の周囲に余白が表示さ   *
*  れてしまう場合は、ウィンドウズの縮小版キャッシュを削除した上  *
*  で、ウィンドウズを再起動してみたください。このファイルの 2.2  *
*  に詳しい手順が書いてあります。                                *
*                                                                *
******************************************************************


目次
1. Alissa's PDF Thumbnail Trimmerについて
2. 使用上の注意と既知の問題
2.1 注意
2.2 既知の問題
3. システム要件
4. インストールとアンインストール
4.1 インストール
4.2 アンインストール
4.3 Adobe Readerの更新
4.4 ソースファイルについて
5. 結び
5.1 謝辞
5.2 何かご質問は?

---

1. Alissa's PDF Thumbnail Trimmerについて

Alissa's PDF Thumbnail Trimmerは、Adobe ReaderがPDF縮小版を表示する動作
を改善するちょっとしたWindowsのプログラムです。

ウィンドウズには、ファイルの縮小版（サムネイル: プレビュー用の小さな画
像）をデスクトップや他のフォルダ画面に表示する機能があります。PDFファイ
ルでは、パソコンにPDFの通常の表示プログラムとしてAdobe Readerをインストー
ルしてあれば、見えないところでAdobe Readerが働いてPDFファイルごとに縮小
版が作成されます。

残念ながら、現在のAdobe Reader（少なくともバージョン8.Xから11.0.2まで）
では、縮小版の作成に少々問題があります。

Alissa's PDF Thumbnail Trimmerは、Adobe Readerの縮小版作成機能を調整し
て、次の二つの主要な問題を解決します。

(1) PDFの用紙サイズが正方形でない場合（おそらく普通は正方形ではありませ
    んが）、作成される縮小版画像には全体が正方形になるように左右または
    上下には余白が追加されてしまいます。Alissa's PDF Thumbnail Trimmer
    は、この余白を取り除きます。（これがTrimmerという名前の由来です。）

(2) 64ビット版のWindows（x64エディションとも言います）を使っている場合
    には、PDFファイルを作成したりコピーしたりした後すぐにPDFの縮小版が
    フォルダー画面に現れないことがあります。（まったく現れる様子が見え
    ないかもしれません。）Alissa's PDF Thumbnail Trimmerは、64ビット版
    のWindowsでも、PDFの縮小版を確実に表示します。

2. 使用上の注意と既知の問題

2.1 注意

Alissa's PDF Thumbnail Trimmerは、技術的に言うと一そろいのWindowsシェル
拡張からできています。「シェル拡張」というのは、Windows自体に対する一種
のプラグインで、インストールするとWindowsの一部になります。シェル拡張に
バグがあると、Windowsの動作の安定性に影響を与えてしまいます。

Alissa's PDF Thumbnail Trimmerは一個人が趣味で開発しているプログラムで
す。市販の商用プログラムのような高品質を期待することはできません。なに
かしらバグがあるでしょう。Alissa's PDF Thumbnail Trimmerを使うことで、
利用者は、Windowsがクラッシュし重要なデータを失う危険を冒すことになり
ます。

2.2 既知の問題

Alissa's PDF Thumbnail Trimmerをインストールした後でも、既存のPDFファイ
ルの縮小版は従来通りに、つまり上下または左右に余白が表示されてしまうこ
とがあります。これはWindowsの縮小版（サムネイル）キャッシュが原因と考え
られます。対策として、縮小版キャッシュを手操作で削除してからWindowsを
再起動してみてください。具体的には、「スタート」から「すべてのプログラ
ム」→「アクセサリ」→「システム ツール」→「ディスク クリーンアップ」
の順で選択し、ドライブを選んでから「縮小表示」がチェックされていること
を確かめて「OK」をクリックしてください。クリーン アップが終わったらすぐ
にWindowsを再起動します。

3. システム要件

Alissa's PDF Thumbnail Trimmerは、最近のWindowsで動作します。私は、次の
ような環境でテストをしています。

Windows XP (SP3)
Windows 7 (SP1未適用の32ビット版・SP1の64ビット版)

他にWindows Vista（32または64ビット）でも動作するはずです。ひょっとする
と、Windows XPのSP 2以前やWindows XP x64エディションでも動作するかもし
れません。

Alissa's PDF Thumbnail Trimmerを利用するためには、あらかじめAdobe
Readerのバージョン9、10、または11をインストールしておく必要があります。
Adobe Readerのバージョン8でも動作するかもしれません。（ただし、Adobe 
Reader のバージョン8にはさまざまな問題があると言われているので、利用は
勧められません。）Adobe Acrobat でも利用できるかもしれません。

4. インストールとアンインストール

4.1 インストール

Alissa's PDF Thumbnail Trimmerは、PDFThumbTrimmer-*-setup.exeという名前
の実行形式のインストーラーとして提供されます。ここで、* は実際にはバー
ジョン番号です。また、".exe"の部分は設定によっては表示されないかもしれ
ません。

このファイルをダブルクリックするなどしてインストーラーを実行すると、
Alissa's PDF Thumbnail Trimmerがインストールされます。

Windows VistaまたはWindows 7を使っていて、UAC（ユーザーアカウント制御）
を有効にしている場合、インストーラーを実行するときに権限の昇格を要求さ
れるはずです。

インストーラーは、ファイルをコピーする場所（フォルダ）を聞いてくるはず
です。Alissa's PDF Thumbnail Trimmerは32ビットフォルダーにインストール
する必要があります。つまり、64 ビットWindowsを使っている場合、
"C:\Program Files" にインストールしてはいけません。代わりに
"C:\Program Files (x86)" フォルダにインストールしてください。32ビット
Windowsでは、全てのフォルダが32ビットなので、この点を気にする必要はあり
ません。

Alissa's PDF Thumbnail Trimmerは小さなプログラムです。ディスクの空きは
200KB程度あれば十分です。

4.2 アンインストール

Alissa's PDF Thumbnail Trimmerのアンインストールは、コントロールパネル
の「アプリケーションの追加と削除」（Windows XPの場合）または「プログラ
ムと機能」（Windows 7の場合）を使ってください。

それ以外に、Alissa's PDF Thumbnail Trimmerをインストールしたフォルダに
ある uninst.exe というプログラムを直接実行してもアンインストールできま
す。

Alissa's PDF Thumbnail Trimmerをインストーラーは、新しいレジストリエン
トリを作ったり、既存のレジストリエントリを変更したりします。アンインス
トールのときにレジストリを元に戻す必要があります。このため、単に関係す
るファイルを削除するだけでは十分でありません。アンインストーラーを利用
せずにアンインストールすることは勧められません。

4.3 Adobe Readerの更新

Adobe Readerを更新すると、Alissa's PDF Thumbnail Trimmerが動作しなくな
るかもしれません。その場合は、再度インストーラーを実行してください。再
インストールは、いわゆる「上書き」で実行できます。事前にアンインストー
ルする必要はありません。

4.4 ソースファイルについて

Alissa's PDF Thumbnail Trimmerのソースファイルは、バイナリ配布自体には
含まれませんが、別途公開しています。これを書いている時点では、ソースファ
イルは Github でホストされており、以下の URL にあります:

    https://github.com/AlissaSabre/PDFThumbTrimmer

5. 結び

5.1 謝辞

この仕事は、私がMobiHandlerプログラムを作ったときにいただいたコメントが
きっかけとなりました。そのコメントを読むまで私は、PDF用のthumbnail
handler が提供されているという事実を知りませんでした。

インストーラーはNSIS (Nullsoft Scriptable Install System) を用いて開発
しました。これはオープンソースのプロジェクトで、以下にあります:
http://nsis.sourceforge.net

インストーラーは、LZMA圧縮モジュールも利用しています。これは、別のオー
プンソースプロジェクト (7-Zip) の一部で、 http://www.7-zip.org にあり、
NSISと一緒に配布されています。

5.2 何かご質問は?

Alissa's PDF Thumbnail Trimmerについてのご質問やご意見は、Alissa Sabre
<alissa_sabre@yahoo.co.jp> までメールをお寄せください。メールは英語か日
本語でお願いします。

