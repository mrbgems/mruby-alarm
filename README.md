# mruby-alarm   [![Build Status](https://travis-ci.org/k0u5uk3/mruby-alarm.png?branch=master)](https://travis-ci.org/k0u5uk3/mruby-alarm)
Alarm class
## install by mrbgems
- add conf.gem line to `build_config.rb`

```ruby
MRuby::Build.new do |conf|

    # ... (snip) ...

    conf.gem :github => 'k0u5uk3/mruby-alarm'
end
```
## example

 * use class method

```
$ ./bin/mirb
mirb - Embeddable Interactive Ruby Shell

> Alarm.alarm(5)
 => nil
> Alarm clock: 14
```

 * use instance method

```
$ ./bin/mirb
mirb - Embeddable Interactive Ruby Shell

> arm = Alarm.new
 => #<Alarm:0x7f8e5882fff0>
> arm.alarm(5)
 => nil
> Alarm clock: 14
```

## License
under the MIT License:
- see LICENSE file
