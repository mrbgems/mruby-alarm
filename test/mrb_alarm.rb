##
## Alarm Test
##

assert("Alarm#hello") do
  t = Alarm.new "hello"
  assert_equal("hello", t.hello)
end

assert("Alarm#bye") do
  t = Alarm.new "hello"
  assert_equal("hello bye", t.bye)
end

assert("Alarm.hi") do
  assert_equal("hi!!", Alarm.hi)
end
