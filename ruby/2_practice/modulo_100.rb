require "pry"

def main
  n = gets.to_i
  ary = gets.split(" ").map(&:to_i)
  sum = ary[0..n-1].sum
  puts sum % 100
end

main
