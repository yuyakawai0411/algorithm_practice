require "pry"
## 全探査で解いた
def main
  n, s = gets.split(" ").map(&:to_i)
  count = 0
  (1..n).each do |i|
    (1..n).each do |j|
      count += 1 if i + j <= s
    end
  end
  puts count
end

main
