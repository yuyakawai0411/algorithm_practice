require "pry"

def main
  n = gets.to_i
  puts (1..n).inject(:*)
end

main
