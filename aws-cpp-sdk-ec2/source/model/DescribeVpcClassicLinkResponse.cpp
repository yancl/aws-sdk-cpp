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

#include <aws/ec2/model/DescribeVpcClassicLinkResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeVpcClassicLinkResponse::DescribeVpcClassicLinkResponse()
{
}

DescribeVpcClassicLinkResponse::DescribeVpcClassicLinkResponse(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeVpcClassicLinkResponse& DescribeVpcClassicLinkResponse::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "DescribeVpcClassicLinkResponse")
  {
    resultNode = rootNode.FirstChild("DescribeVpcClassicLinkResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode vpcsNode = resultNode.FirstChild("vpcSet");
    if(!vpcsNode.IsNull())
    {
      XmlNode vpcsMember = vpcsNode.FirstChild("item");
      while(!vpcsMember.IsNull())
      {
        m_vpcs.push_back(vpcsMember);
        vpcsMember = vpcsMember.NextNode("item");
      }

    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeVpcClassicLinkResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
