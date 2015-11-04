/*
** mrb_alarm.c - Alarm class
**
** Copyright (c) Kousuke Shimofuji 2015
**
** See Copyright Notice in LICENSE
*/

#include <unistd.h>
#include <signal.h>

#include "mruby.h"
#include "mruby/data.h"
#include "mrb_alarm.h"

#define DONE mrb_gc_arena_restore(mrb, 0);

static mrb_value mrb_alarm_init(mrb_state *mrb, mrb_value self)
{
  return self;
}

static mrb_value mrb_instance_alarm(mrb_state *mrb, mrb_value self)
{
   mrb_int time;
   mrb_get_args(mrb, "i", &time);
   alarm(time);
   return mrb_nil_value();
}

static mrb_value mrb_class_alarm(mrb_state *mrb, mrb_value self)
{
   mrb_int time;
   mrb_get_args(mrb, "i", &time);
   alarm(time);
   return mrb_nil_value();
}

void mrb_mruby_alarm_gem_init(mrb_state *mrb)
{
    struct RClass *alarm;
    alarm = mrb_define_class(mrb, "Alarm", mrb->object_class);
    mrb_define_method(mrb, alarm, "initialize", mrb_alarm_init, MRB_ARGS_NONE());
    mrb_define_method(mrb, alarm, "alarm", mrb_instance_alarm, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb, alarm, "alarm", mrb_class_alarm, MRB_ARGS_REQ(1));
    DONE;
}

void mrb_mruby_alarm_gem_final(mrb_state *mrb)
{
}

