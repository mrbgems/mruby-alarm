##
## Alarm Test
##

assert 'Alarm.alarm' do
  alarmed = false

  Signal.trap(:ALRM) do |signo|
    alarmed = true
  end

  Alarm.alarm(1)
  sleep(2)

  assert_true alarmed
end
