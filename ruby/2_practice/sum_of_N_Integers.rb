require "pry"

def main
  n = gets.to_i
  ary = gets.split(" ").map(&:to_i)
  puts ary[0..n-1].sum
end

main
