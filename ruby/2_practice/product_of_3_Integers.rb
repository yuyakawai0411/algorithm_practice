require "pry"

def main
  ary = gets.split(" ").map(&:to_i)
  puts ary[0..2].inject(:*)
end

main
