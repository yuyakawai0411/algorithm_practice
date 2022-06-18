# algorithm_practice
At-Coderの練習用リポジトリです
- [問題集Link](https://atcoder.jp/contests/math-and-algorithm)
- [回答集Link](https://github.com/E869120/math-algorithm-book/tree/main/codes/cpp)
# 考え方
1. 現実世界で何のにたつの?
  - 現実世界の何を解決するのか？
  - 発祥・起源
  - ex.最大公約数=正方形のタイルをピッタリひきつめるのに役立つ
2. 時間がかかるケースで考える
  - ex.全探索
3. どうやったら効率的にできるか考える
  - ex.二分探索

# いまいち理解できていない
- []026-Coin Gacha

# セットアップ
```
sudo apt-get update
```
# アプリ
## gcc、g++
### 概要
- C言語、C++のコンパイラ
- バイナリやアセンブラで出力できる
### インストール
```
$ sudo apt install gcc
$ sudo apt install g++
```
### 使用例
```
# バイナリ出力
$ gcc -g3 -O0 -o hello hello.c
$ g++ -g3 -O0 -o hello hello.cpp
# アセンブラ出力
$ gcc -g3 -O0 -S -o hello hello.c
$ g++ -g3 -O0 -S -o hello hello.cpp
```
## gdb
### 概要
- binding.pryのように動的デバックをすることができる
- メモリの中身なども見れるため、C言語のデバッカーとして優秀
### インストール
```
$ sudo apt install gdb
```
### 使用例
```
$ gdb ./hello
```
## perf
### 概要
- プログラムのパフォーマンスを計測できる
### インストール
```
$ sudo apt install linux-tools-common linux-tools-$(uname -r)
```
### 使用例
```
$ sudo perf stat ./hello
```
## valgrind
### 概要
- メモリの解放忘れなどを検知してくれる
### インストール
```
$ sudo apt install valgrind
```
### 使用例
```
# definitely lost検出
$ valgrind --leak-check=full ./hello 1
# indirectly lost検出
$ valgrind --leak-check=full ./hello 2
# segfault検出
$ valgrind --leak-check=full ./hello 3
```
## strace
### 概要
- 入力したコマンドをシステムコール(OSへの命令)ベースで確認することができる
### インストール
```
sudo apt install strace
```  
### 使用例
```
$ strace uname
```