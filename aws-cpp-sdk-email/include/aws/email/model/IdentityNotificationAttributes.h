/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{
  /*
    <p>Represents the notification attributes of an identity, including whether an identity has Amazon Simple Notification Service (Amazon SNS) topics set for bounce, complaint, and/or delivery notifications, and whether feedback forwarding is enabled for bounce and complaint notifications.</p>
  */
  class AWS_SES_API IdentityNotificationAttributes
  {
  public:
    IdentityNotificationAttributes();
    IdentityNotificationAttributes(const Aws::Utils::Xml::XmlNode& xmlNode);
    IdentityNotificationAttributes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish bounce notifications.</p>
    */
    inline const Aws::String& GetBounceTopic() const{ return m_bounceTopic; }
    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish bounce notifications.</p>
    */
    inline void SetBounceTopic(const Aws::String& value) { m_bounceTopicHasBeenSet = true; m_bounceTopic = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish bounce notifications.</p>
    */
    inline void SetBounceTopic(const char* value) { m_bounceTopicHasBeenSet = true; m_bounceTopic.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish bounce notifications.</p>
    */
    inline IdentityNotificationAttributes&  WithBounceTopic(const Aws::String& value) { SetBounceTopic(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish bounce notifications.</p>
    */
    inline IdentityNotificationAttributes& WithBounceTopic(const char* value) { SetBounceTopic(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish complaint notifications.</p>
    */
    inline const Aws::String& GetComplaintTopic() const{ return m_complaintTopic; }
    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish complaint notifications.</p>
    */
    inline void SetComplaintTopic(const Aws::String& value) { m_complaintTopicHasBeenSet = true; m_complaintTopic = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish complaint notifications.</p>
    */
    inline void SetComplaintTopic(const char* value) { m_complaintTopicHasBeenSet = true; m_complaintTopic.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish complaint notifications.</p>
    */
    inline IdentityNotificationAttributes&  WithComplaintTopic(const Aws::String& value) { SetComplaintTopic(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish complaint notifications.</p>
    */
    inline IdentityNotificationAttributes& WithComplaintTopic(const char* value) { SetComplaintTopic(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish delivery notifications.</p>
    */
    inline const Aws::String& GetDeliveryTopic() const{ return m_deliveryTopic; }
    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish delivery notifications.</p>
    */
    inline void SetDeliveryTopic(const Aws::String& value) { m_deliveryTopicHasBeenSet = true; m_deliveryTopic = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish delivery notifications.</p>
    */
    inline void SetDeliveryTopic(const char* value) { m_deliveryTopicHasBeenSet = true; m_deliveryTopic.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish delivery notifications.</p>
    */
    inline IdentityNotificationAttributes&  WithDeliveryTopic(const Aws::String& value) { SetDeliveryTopic(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish delivery notifications.</p>
    */
    inline IdentityNotificationAttributes& WithDeliveryTopic(const char* value) { SetDeliveryTopic(value); return *this;}

    /*
     <p>Describes whether Amazon SES will forward bounce and complaint notifications as email. <code>true</code> indicates that Amazon SES will forward bounce and complaint notifications as email, while <code>false</code> indicates that bounce and complaint notifications will be published only to the specified bounce and complaint Amazon SNS topics.</p>
    */
    inline bool GetForwardingEnabled() const{ return m_forwardingEnabled; }
    /*
     <p>Describes whether Amazon SES will forward bounce and complaint notifications as email. <code>true</code> indicates that Amazon SES will forward bounce and complaint notifications as email, while <code>false</code> indicates that bounce and complaint notifications will be published only to the specified bounce and complaint Amazon SNS topics.</p>
    */
    inline void SetForwardingEnabled(bool value) { m_forwardingEnabledHasBeenSet = true; m_forwardingEnabled = value; }

    /*
     <p>Describes whether Amazon SES will forward bounce and complaint notifications as email. <code>true</code> indicates that Amazon SES will forward bounce and complaint notifications as email, while <code>false</code> indicates that bounce and complaint notifications will be published only to the specified bounce and complaint Amazon SNS topics.</p>
    */
    inline IdentityNotificationAttributes&  WithForwardingEnabled(bool value) { SetForwardingEnabled(value); return *this;}

  private:
    Aws::String m_bounceTopic;
    bool m_bounceTopicHasBeenSet;
    Aws::String m_complaintTopic;
    bool m_complaintTopicHasBeenSet;
    Aws::String m_deliveryTopic;
    bool m_deliveryTopicHasBeenSet;
    bool m_forwardingEnabled;
    bool m_forwardingEnabledHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws