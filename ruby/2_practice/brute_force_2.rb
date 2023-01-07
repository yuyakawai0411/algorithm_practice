require "pry"
## 小さい具体例で何ができたらいいか考えてみる
# ary[0] + ary[1] == s
# ary[0] + ary[1] + ary[2] == s
# ary[0] + ary[2] == s
# ary[1] + ary[2] == s
def main
  n, s = gets.split(" ").map(&:to_i)
  ary = gets.split(" ").map(&:to_i)
  answer = false

  (0..n -1).each do |i|
    sum = ary[i]
    (i + 1..n - 1).each do |j|
      sum = sum + ary[j]
      count = true if sum == s
    end
  end

  puts answer == true ? 'Yes' : 'No'
end

main
