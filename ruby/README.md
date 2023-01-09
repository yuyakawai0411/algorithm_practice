## 進捗
### 2.1 節｜数の分類・文字式・2 進法
- [x] 本文 2.1.3 項：001 - Print 5+N
- [x] 本文 2.1.4 項：002 - Sum of 3 Integers
- [x] 本文 2.1.5 項：003 - Sum of N Integers
- [x] 節末問題 2.1.3：004 - Product of 3 Integers
### 2.2 節｜基本的な演算と記号
- [x] 節末問題 2.2.4：005 - Modulo 100
### 2.3 節｜いろいろな関数
該当問題なし（すべて手計算問題または 1 つのケースについて答える問題）
### 2.4 節｜計算回数を見積もろう　～全探索と二分探索～
- [x] 本文 2.4.3 項：006 - Print 2N+3
- [x] 本文 2.4.4 項：007 - Number of Multiples 1
- [x] 本文 2.4.5 項：008 - Brute Force 1
- [ ] 本文 2.4.6 項：009 - Brute Force 2
### 2.5 節｜その他の基本的な数学の知識
- [x] 節末問題 2.5.3：010 - Factorial
- [x] 節末問題 2.5.4：011 - Print Prime Numbers
### 3.1 節｜素数判定法
- [x] 本文 3.1.2 項：012 - Primality Test
- [ ] 本文 3.1.5 項：013 - Divisor Enumeration
- [ ] 節末問題 3.1.2：014 - Factorization
### 3.2 節｜ユークリッドの互除法
- [ ] 本文 3.2.1 項：015 - Greatest Common Divisor
- [ ] 節末問題 3.2.2：016 - Greatest Common Divisor of N Integers
- [ ] 節末問題 3.2.3：017 - Least Common Multiple of N Integers
### 3.3 節｜場合の数とアルゴリズム
- [ ] 本文 3.3.6 項：018 - Convenience Store 1
- [ ] 本文 3.3.7 項：019 - Choose Cards 1
- [ ] 本文 3.3.8 項：020 - Choose Cards 2
- [ ] 節末問題 3.3.3：021 - Combination Easy
- [ ] 節末問題 3.3.6：022 - Choose Cards 3
### 3.4 節｜確率・期待値とアルゴリズム
- [ ] 本文 3.4.5 項：023 - Dice Expectation
- [ ] 本文 3.4.6 項：024 - Answer Exam Randomly
- [ ] 節末問題 3.4.3：025 - Jiro's Vacation
- [ ] 節末問題 3.4.4：026 - Coin Gacha
### 3.5 節｜モンテカルロ法　～統計的な考え方～
該当問題なし（すべて手計算問題または 1 つのケースについて答える問題）
### 3.6 節｜ソートと再帰の考え方
- [ ] 節末問題 3.6.3：027 - Sorting
### 3.7 節｜動的計画法　～漸化式の利用～
- [ ] 本文 3.7.6 項：028 - Frog 1
- [ ] 本文 3.7.7 項：029 - Climb Stairs
- [ ] 本文 3.7.8 項：030 - Knapsack 1
- [ ] 節末問題 3.7.4：009 - Brute Force 2（2 回目）
- [ ] 節末問題 3.7.6：031 - Taro's Vacation
- [ ] コラム 3｜配列の二分探索
- [ ] コラム 3：032 - Binary Search

## 使用ライブラリ
### デバックする
```rb
require "pry"

# 処理内容
binding.pry
# 処理内容
```
### 処理時間を計測する
```rb
require 'benchmark'

result = Benchmark.realtime do
  # 処理内容
end
puts "処理時間:#{result * 1000}ms"
```

## 参考文献
- [Ruby競プロTips](https://zenn.dev/universato/articles/20201210-z-ruby)
- [RubyでAtcoder水色になりました！](https://kona0001.hatenablog.com/entry/2020/11/24/165850)
- [AtCoder Library](https://github.com/universato/ac-library-rb)