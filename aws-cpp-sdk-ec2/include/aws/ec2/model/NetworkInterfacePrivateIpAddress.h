﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/NetworkInterfaceAssociation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the private IPv4 address of a network interface.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInterfacePrivateIpAddress">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API NetworkInterfacePrivateIpAddress
  {
  public:
    NetworkInterfacePrivateIpAddress();
    NetworkInterfacePrivateIpAddress(const Aws::Utils::Xml::XmlNode& xmlNode);
    NetworkInterfacePrivateIpAddress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The association information for an Elastic IP address (IPv4) associated with
     * the network interface.</p>
     */
    inline const NetworkInterfaceAssociation& GetAssociation() const{ return m_association; }

    /**
     * <p>The association information for an Elastic IP address (IPv4) associated with
     * the network interface.</p>
     */
    inline void SetAssociation(const NetworkInterfaceAssociation& value) { m_associationHasBeenSet = true; m_association = value; }

    /**
     * <p>The association information for an Elastic IP address (IPv4) associated with
     * the network interface.</p>
     */
    inline void SetAssociation(NetworkInterfaceAssociation&& value) { m_associationHasBeenSet = true; m_association = std::move(value); }

    /**
     * <p>The association information for an Elastic IP address (IPv4) associated with
     * the network interface.</p>
     */
    inline NetworkInterfacePrivateIpAddress& WithAssociation(const NetworkInterfaceAssociation& value) { SetAssociation(value); return *this;}

    /**
     * <p>The association information for an Elastic IP address (IPv4) associated with
     * the network interface.</p>
     */
    inline NetworkInterfacePrivateIpAddress& WithAssociation(NetworkInterfaceAssociation&& value) { SetAssociation(std::move(value)); return *this;}

    /**
     * <p>Indicates whether this IPv4 address is the primary private IPv4 address of
     * the network interface.</p>
     */
    inline bool GetPrimary() const{ return m_primary; }

    /**
     * <p>Indicates whether this IPv4 address is the primary private IPv4 address of
     * the network interface.</p>
     */
    inline void SetPrimary(bool value) { m_primaryHasBeenSet = true; m_primary = value; }

    /**
     * <p>Indicates whether this IPv4 address is the primary private IPv4 address of
     * the network interface.</p>
     */
    inline NetworkInterfacePrivateIpAddress& WithPrimary(bool value) { SetPrimary(value); return *this;}

    /**
     * <p>The private DNS name.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * <p>The private DNS name.</p>
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>The private DNS name.</p>
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }

    /**
     * <p>The private DNS name.</p>
     */
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }

    /**
     * <p>The private DNS name.</p>
     */
    inline NetworkInterfacePrivateIpAddress& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The private DNS name.</p>
     */
    inline NetworkInterfacePrivateIpAddress& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * <p>The private DNS name.</p>
     */
    inline NetworkInterfacePrivateIpAddress& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The private IPv4 address.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The private IPv4 address.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IPv4 address.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The private IPv4 address.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The private IPv4 address.</p>
     */
    inline NetworkInterfacePrivateIpAddress& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IPv4 address.</p>
     */
    inline NetworkInterfacePrivateIpAddress& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The private IPv4 address.</p>
     */
    inline NetworkInterfacePrivateIpAddress& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}

  private:
    NetworkInterfaceAssociation m_association;
    bool m_associationHasBeenSet;
    bool m_primary;
    bool m_primaryHasBeenSet;
    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet;
    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
