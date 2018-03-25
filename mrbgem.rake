MRuby::Gem::Specification.new('mruby-alarm') do |spec|
  spec.license = 'MIT'
  spec.authors = 'Kousuke Shimofuji'
  spec.add_dependency('mruby-signal')
  spec.add_test_dependency('mruby-sleep')
end
