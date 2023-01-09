require "pry"
require 'benchmark'

def is_primality?(n)
  return false if n == 1
  return true if n == 2

  primality = true
  (2..n).each do |i|
    # **はn乗 √nまで調べて割り切れなかったら素数と言い切っていい
    break if i > n ** 0.5
    # 最後(自身)で割らない=途中で割り切れたら素数じゃない
    if n % i == 0
      primality = false
      break
    end
  end
  primality
end

def main
  n = gets.to_i
  result = Benchmark.realtime do
    primality = is_primality?(n)
    puts primality ? 'Yes' : 'No'
  end
  puts "処理時間:#{result * 1000}ms"
end

main
