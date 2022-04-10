#ifndef _ROS_lino_msgs_running_time_h
#define _ROS_lino_msgs_running_time_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lino_msgs
{

  class running_time : public ros::Msg
  {
    public:
      typedef float _time0_pub_type;
      _time0_pub_type time0_pub;
      typedef float _time0_sub_type;
      _time0_sub_type time0_sub;
      typedef float _time1_pub_type;
      _time1_pub_type time1_pub;
      typedef float _time1_sub_type;
      _time1_sub_type time1_sub;
      typedef float _time2_pub_type;
      _time2_pub_type time2_pub;
      typedef float _time2_sub_type;
      _time2_sub_type time2_sub;

    running_time():
      time0_pub(0),
      time0_sub(0),
      time1_pub(0),
      time1_sub(0),
      time2_pub(0),
      time2_sub(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->time0_pub);
      offset += serializeAvrFloat64(outbuffer + offset, this->time0_sub);
      offset += serializeAvrFloat64(outbuffer + offset, this->time1_pub);
      offset += serializeAvrFloat64(outbuffer + offset, this->time1_sub);
      offset += serializeAvrFloat64(outbuffer + offset, this->time2_pub);
      offset += serializeAvrFloat64(outbuffer + offset, this->time2_sub);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->time0_pub));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->time0_sub));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->time1_pub));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->time1_sub));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->time2_pub));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->time2_sub));
     return offset;
    }

    virtual const char * getType() override { return "lino_msgs/running_time"; };
    virtual const char * getMD5() override { return "fba7101da493706fc2932a90aa6f2991"; };

  };

}
#endif
