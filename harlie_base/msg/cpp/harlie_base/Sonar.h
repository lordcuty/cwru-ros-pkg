/* auto-generated by genmsg_cpp from /opt/igvc_ros/harlie_base/msg/Sonar.msg.  Do not edit! */
#ifndef HARLIE_BASE_SONAR_H
#define HARLIE_BASE_SONAR_H

#include <string>
#include <vector>
#include "ros/message.h"
#include "ros/debug.h"
#include "ros/assert.h"
#include "ros/time.h"

#include "roslib/Header.h"

namespace harlie_base
{

//! \htmlinclude Sonar.msg.html

class Sonar : public ros::Message
{
public:
  typedef boost::shared_ptr<Sonar> Ptr;
  typedef boost::shared_ptr<Sonar const> ConstPtr;

  typedef roslib::Header _header_type;
  typedef float _dist_type;

  roslib::Header header;
  float dist;

  Sonar() : ros::Message(),
    dist(0)
  {
  }
  Sonar(const Sonar &copy) : ros::Message(),
    header(copy.header),
    dist(copy.dist)
  {
    (void)copy;
  }
  Sonar &operator =(const Sonar &copy)
  {
    if (this == &copy)
      return *this;
    header = copy.header;
    dist = copy.dist;
    return *this;
  }
  virtual ~Sonar() 
  {
  }
  inline static std::string __s_getDataType() { return std::string("harlie_base/Sonar"); }
  inline static std::string __s_getMD5Sum() { return std::string("32a7fd24a5630b5643e0d1882893197a"); }
  inline static std::string __s_getMessageDefinition()
  {
    return std::string(
    "Header header\n"
    "float32 dist\n"
    "\n"
    "================================================================================\n"
    "MSG: roslib/Header\n"
    "# Standard metadata for higher-level stamped data types.\n"
    "# This is generally used to communicate timestamped data \n"
    "# in a particular coordinate frame.\n"
    "# \n"
    "# sequence ID: consecutively increasing ID \n"
    "uint32 seq\n"
    "#Two-integer timestamp that is expressed as:\n"
    "# * stamp.secs: seconds (stamp_secs) since epoch\n"
    "# * stamp.nsecs: nanoseconds since stamp_secs\n"
    "# time-handling sugar is provided by the client library\n"
    "time stamp\n"
    "#Frame this data is associated with\n"
    "# 0: no frame\n"
    "# 1: global frame\n"
    "string frame_id\n"
    "\n"
    "\n"
    );
  }
  inline virtual const std::string __getDataType() const { return __s_getDataType(); }
  inline virtual const std::string __getMD5Sum() const { return __s_getMD5Sum(); }
  inline virtual const std::string __getMessageDefinition() const { return __s_getMessageDefinition(); }
  inline uint32_t serializationLength() const
  {
    unsigned __l = 0;
    __l += header.serializationLength(); // header
    __l += 4; // dist
    return __l;
  }
  virtual uint8_t *serialize(uint8_t *write_ptr,
                             uint32_t seq) const
  {
    roslib::Header _ser_header = header;
    bool __reset_seq = (header.seq == 0);
    if (__reset_seq) _ser_header.seq = seq;
    write_ptr = _ser_header.serialize(write_ptr, seq);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, dist);
    return write_ptr;
  }
  virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    read_ptr = header.deserialize(read_ptr);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, dist);
    return read_ptr;
  }
};

typedef boost::shared_ptr<Sonar> SonarPtr;
typedef boost::shared_ptr<Sonar const> SonarConstPtr;


}

#endif