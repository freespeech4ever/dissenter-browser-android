// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_BROWSER_SERVICE_WORKER_SERVICE_WORKER_REQUEST_HANDLER_H_
#define CONTENT_BROWSER_SERVICE_WORKER_SERVICE_WORKER_REQUEST_HANDLER_H_

#include <memory>

#include "base/callback_forward.h"
#include "base/macros.h"
#include "base/memory/weak_ptr.h"
#include "content/browser/loader/navigation_loader_interceptor.h"
#include "content/common/content_export.h"
#include "content/common/service_worker/service_worker_types.h"
#include "content/public/common/resource_type.h"

namespace content {

class ResourceContext;
class ServiceWorkerNavigationHandleCore;
class ServiceWorkerProviderHost;
class WebContents;
struct NavigationRequestInfo;

// Contains factory methods for creating the NavigationLoaderInterceptors for
// routing requests to service workers.
// TODO(falken): This is just a collection of static functions. Move these to
// non-member functions?
class CONTENT_EXPORT ServiceWorkerRequestHandler {
 public:
  // Returns a loader interceptor for a navigation. May return nullptr
  // if the navigation cannot use service workers.
  static std::unique_ptr<NavigationLoaderInterceptor> CreateForNavigation(
      const GURL& url,
      ResourceContext* resource_context,
      ServiceWorkerNavigationHandleCore* navigation_handle_core,
      const NavigationRequestInfo& request_info,
      base::RepeatingCallback<WebContents*()> web_contents_getter,
      base::WeakPtr<ServiceWorkerProviderHost>* out_provider_host);

  // Same as above but for a dedicated worker or shared worker.
  static std::unique_ptr<NavigationLoaderInterceptor> CreateForWorker(
      const network::ResourceRequest& resource_request,
      ServiceWorkerProviderHost* host);

 private:
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRequestHandler);
};

}  // namespace content

#endif  // CONTENT_BROWSER_SERVICE_WORKER_SERVICE_WORKER_REQUEST_HANDLER_H_
