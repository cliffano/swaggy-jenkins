//
// RemoteAccessAPI.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
import Alamofire



open class RemoteAccessAPI {
    /**

     - parameter depth: (query) Recursion depth in response model 
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getComputer(depth: Int, completion: @escaping ((_ data: ComputerSet?,_ error: Error?) -> Void)) {
        getComputerWithRequestBuilder(depth: depth).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }


    /**
     - GET /computer/api/json
     - Retrieve computer details
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter depth: (query) Recursion depth in response model 
     - returns: RequestBuilder<ComputerSet> 
     */
    open class func getComputerWithRequestBuilder(depth: Int) -> RequestBuilder<ComputerSet> {
        let path = "/computer/api/json"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        var url = URLComponents(string: URLString)
        url?.queryItems = APIHelper.mapValuesToQueryItems([
            "depth": depth.encodeToJSON()
        ])

        let requestBuilder: RequestBuilder<ComputerSet>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**

     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getJenkins(completion: @escaping ((_ data: Hudson?,_ error: Error?) -> Void)) {
        getJenkinsWithRequestBuilder().execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }


    /**
     - GET /api/json
     - Retrieve Jenkins details
     - BASIC:
       - type: http
       - name: jenkins_auth
     - returns: RequestBuilder<Hudson> 
     */
    open class func getJenkinsWithRequestBuilder() -> RequestBuilder<Hudson> {
        let path = "/api/json"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<Hudson>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**

     - parameter name: (path) Name of the job 
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getJob(name: String, completion: @escaping ((_ data: FreeStyleProject?,_ error: Error?) -> Void)) {
        getJobWithRequestBuilder(name: name).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }


    /**
     - GET /job/{name}/api/json
     - Retrieve job details
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (path) Name of the job 
     - returns: RequestBuilder<FreeStyleProject> 
     */
    open class func getJobWithRequestBuilder(name: String) -> RequestBuilder<FreeStyleProject> {
        var path = "/job/{name}/api/json"
        let namePreEscape = "\(name)"
        let namePostEscape = namePreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{name}", with: namePostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<FreeStyleProject>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**

     - parameter name: (path) Name of the job 
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getJobConfig(name: String, completion: @escaping ((_ data: String?,_ error: Error?) -> Void)) {
        getJobConfigWithRequestBuilder(name: name).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }


    /**
     - GET /job/{name}/config.xml
     - Retrieve job configuration
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (path) Name of the job 
     - returns: RequestBuilder<String> 
     */
    open class func getJobConfigWithRequestBuilder(name: String) -> RequestBuilder<String> {
        var path = "/job/{name}/config.xml"
        let namePreEscape = "\(name)"
        let namePostEscape = namePreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{name}", with: namePostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<String>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**

     - parameter name: (path) Name of the job 
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getJobLastBuild(name: String, completion: @escaping ((_ data: FreeStyleBuild?,_ error: Error?) -> Void)) {
        getJobLastBuildWithRequestBuilder(name: name).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }


    /**
     - GET /job/{name}/lastBuild/api/json
     - Retrieve job's last build details
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (path) Name of the job 
     - returns: RequestBuilder<FreeStyleBuild> 
     */
    open class func getJobLastBuildWithRequestBuilder(name: String) -> RequestBuilder<FreeStyleBuild> {
        var path = "/job/{name}/lastBuild/api/json"
        let namePreEscape = "\(name)"
        let namePostEscape = namePreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{name}", with: namePostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<FreeStyleBuild>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**

     - parameter name: (path) Name of the job 
     - parameter number: (path) Build number 
     - parameter start: (query) Starting point of progressive text output 
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getJobProgressiveText(name: String, number: String, start: String, completion: @escaping ((_ data: Void?,_ error: Error?) -> Void)) {
        getJobProgressiveTextWithRequestBuilder(name: name, number: number, start: start).execute { (response, error) -> Void in
            if error == nil {
                completion((), error)
            } else {
                completion(nil, error)
            }
        }
    }


    /**
     - GET /job/{name}/{number}/logText/progressiveText
     - Retrieve job's build progressive text output
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (path) Name of the job 
     - parameter number: (path) Build number 
     - parameter start: (query) Starting point of progressive text output 
     - returns: RequestBuilder<Void> 
     */
    open class func getJobProgressiveTextWithRequestBuilder(name: String, number: String, start: String) -> RequestBuilder<Void> {
        var path = "/job/{name}/{number}/logText/progressiveText"
        let namePreEscape = "\(name)"
        let namePostEscape = namePreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{name}", with: namePostEscape, options: .literal, range: nil)
        let numberPreEscape = "\(number)"
        let numberPostEscape = numberPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{number}", with: numberPostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        var url = URLComponents(string: URLString)
        url?.queryItems = APIHelper.mapValuesToQueryItems([
            "start": start
        ])

        let requestBuilder: RequestBuilder<Void>.Type = OpenAPIClientAPI.requestBuilderFactory.getNonDecodableBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**

     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getQueue(completion: @escaping ((_ data: Queue?,_ error: Error?) -> Void)) {
        getQueueWithRequestBuilder().execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }


    /**
     - GET /queue/api/json
     - Retrieve queue details
     - BASIC:
       - type: http
       - name: jenkins_auth
     - returns: RequestBuilder<Queue> 
     */
    open class func getQueueWithRequestBuilder() -> RequestBuilder<Queue> {
        let path = "/queue/api/json"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<Queue>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**

     - parameter number: (path) Queue number 
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getQueueItem(number: String, completion: @escaping ((_ data: Queue?,_ error: Error?) -> Void)) {
        getQueueItemWithRequestBuilder(number: number).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }


    /**
     - GET /queue/item/{number}/api/json
     - Retrieve queued item details
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter number: (path) Queue number 
     - returns: RequestBuilder<Queue> 
     */
    open class func getQueueItemWithRequestBuilder(number: String) -> RequestBuilder<Queue> {
        var path = "/queue/item/{number}/api/json"
        let numberPreEscape = "\(number)"
        let numberPostEscape = numberPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{number}", with: numberPostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<Queue>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**

     - parameter name: (path) Name of the view 
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getView(name: String, completion: @escaping ((_ data: ListView?,_ error: Error?) -> Void)) {
        getViewWithRequestBuilder(name: name).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }


    /**
     - GET /view/{name}/api/json
     - Retrieve view details
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (path) Name of the view 
     - returns: RequestBuilder<ListView> 
     */
    open class func getViewWithRequestBuilder(name: String) -> RequestBuilder<ListView> {
        var path = "/view/{name}/api/json"
        let namePreEscape = "\(name)"
        let namePostEscape = namePreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{name}", with: namePostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<ListView>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**

     - parameter name: (path) Name of the view 
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getViewConfig(name: String, completion: @escaping ((_ data: String?,_ error: Error?) -> Void)) {
        getViewConfigWithRequestBuilder(name: name).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }


    /**
     - GET /view/{name}/config.xml
     - Retrieve view configuration
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (path) Name of the view 
     - returns: RequestBuilder<String> 
     */
    open class func getViewConfigWithRequestBuilder(name: String) -> RequestBuilder<String> {
        var path = "/view/{name}/config.xml"
        let namePreEscape = "\(name)"
        let namePostEscape = namePreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{name}", with: namePostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<String>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**

     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func headJenkins(completion: @escaping ((_ data: Void?,_ error: Error?) -> Void)) {
        headJenkinsWithRequestBuilder().execute { (response, error) -> Void in
            if error == nil {
                completion((), error)
            } else {
                completion(nil, error)
            }
        }
    }


    /**
     - HEAD /api/json
     - Retrieve Jenkins headers
     - BASIC:
       - type: http
       - name: jenkins_auth
     - responseHeaders: [x-jenkins(String)]
     - returns: RequestBuilder<Void> 
     */
    open class func headJenkinsWithRequestBuilder() -> RequestBuilder<Void> {
        let path = "/api/json"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<Void>.Type = OpenAPIClientAPI.requestBuilderFactory.getNonDecodableBuilder()

        return requestBuilder.init(method: "HEAD", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**

     - parameter name: (query) Name of the new job 
     - parameter from: (query) Existing job to copy from (optional)
     - parameter mode: (query) Set to &#39;copy&#39; for copying an existing job (optional)
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - parameter contentType: (header) Content type header application/xml (optional)
     - parameter body: (body) Job configuration in config.xml format (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func postCreateItem(name: String, from: String? = nil, mode: String? = nil, jenkinsCrumb: String? = nil, contentType: String? = nil, body: String? = nil, completion: @escaping ((_ data: Void?,_ error: Error?) -> Void)) {
        postCreateItemWithRequestBuilder(name: name, from: from, mode: mode, jenkinsCrumb: jenkinsCrumb, contentType: contentType, body: body).execute { (response, error) -> Void in
            if error == nil {
                completion((), error)
            } else {
                completion(nil, error)
            }
        }
    }


    /**
     - POST /createItem
     - Create a new job using job configuration, or copied from an existing job
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (query) Name of the new job 
     - parameter from: (query) Existing job to copy from (optional)
     - parameter mode: (query) Set to &#39;copy&#39; for copying an existing job (optional)
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - parameter contentType: (header) Content type header application/xml (optional)
     - parameter body: (body) Job configuration in config.xml format (optional)
     - returns: RequestBuilder<Void> 
     */
    open class func postCreateItemWithRequestBuilder(name: String, from: String? = nil, mode: String? = nil, jenkinsCrumb: String? = nil, contentType: String? = nil, body: String? = nil) -> RequestBuilder<Void> {
        let path = "/createItem"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters = JSONEncodingHelper.encodingParameters(forEncodableObject: body)

        var url = URLComponents(string: URLString)
        url?.queryItems = APIHelper.mapValuesToQueryItems([
            "name": name, 
            "from": from, 
            "mode": mode
        ])
        let nillableHeaders: [String: Any?] = [
            "Jenkins-Crumb": jenkinsCrumb,
            "Content-Type": contentType
        ]
        let headerParameters = APIHelper.rejectNilHeaders(nillableHeaders)

        let requestBuilder: RequestBuilder<Void>.Type = OpenAPIClientAPI.requestBuilderFactory.getNonDecodableBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: true, headers: headerParameters)
    }

    /**

     - parameter name: (query) Name of the new view 
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - parameter contentType: (header) Content type header application/xml (optional)
     - parameter body: (body) View configuration in config.xml format (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func postCreateView(name: String, jenkinsCrumb: String? = nil, contentType: String? = nil, body: String? = nil, completion: @escaping ((_ data: Void?,_ error: Error?) -> Void)) {
        postCreateViewWithRequestBuilder(name: name, jenkinsCrumb: jenkinsCrumb, contentType: contentType, body: body).execute { (response, error) -> Void in
            if error == nil {
                completion((), error)
            } else {
                completion(nil, error)
            }
        }
    }


    /**
     - POST /createView
     - Create a new view using view configuration
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (query) Name of the new view 
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - parameter contentType: (header) Content type header application/xml (optional)
     - parameter body: (body) View configuration in config.xml format (optional)
     - returns: RequestBuilder<Void> 
     */
    open class func postCreateViewWithRequestBuilder(name: String, jenkinsCrumb: String? = nil, contentType: String? = nil, body: String? = nil) -> RequestBuilder<Void> {
        let path = "/createView"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters = JSONEncodingHelper.encodingParameters(forEncodableObject: body)

        var url = URLComponents(string: URLString)
        url?.queryItems = APIHelper.mapValuesToQueryItems([
            "name": name
        ])
        let nillableHeaders: [String: Any?] = [
            "Jenkins-Crumb": jenkinsCrumb,
            "Content-Type": contentType
        ]
        let headerParameters = APIHelper.rejectNilHeaders(nillableHeaders)

        let requestBuilder: RequestBuilder<Void>.Type = OpenAPIClientAPI.requestBuilderFactory.getNonDecodableBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: true, headers: headerParameters)
    }

    /**

     - parameter name: (path) Name of the job 
     - parameter json: (query)  
     - parameter token: (query)  (optional)
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func postJobBuild(name: String, json: String, token: String? = nil, jenkinsCrumb: String? = nil, completion: @escaping ((_ data: Void?,_ error: Error?) -> Void)) {
        postJobBuildWithRequestBuilder(name: name, json: json, token: token, jenkinsCrumb: jenkinsCrumb).execute { (response, error) -> Void in
            if error == nil {
                completion((), error)
            } else {
                completion(nil, error)
            }
        }
    }


    /**
     - POST /job/{name}/build
     - Build a job
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (path) Name of the job 
     - parameter json: (query)  
     - parameter token: (query)  (optional)
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - returns: RequestBuilder<Void> 
     */
    open class func postJobBuildWithRequestBuilder(name: String, json: String, token: String? = nil, jenkinsCrumb: String? = nil) -> RequestBuilder<Void> {
        var path = "/job/{name}/build"
        let namePreEscape = "\(name)"
        let namePostEscape = namePreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{name}", with: namePostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        var url = URLComponents(string: URLString)
        url?.queryItems = APIHelper.mapValuesToQueryItems([
            "json": json, 
            "token": token
        ])
        let nillableHeaders: [String: Any?] = [
            "Jenkins-Crumb": jenkinsCrumb
        ]
        let headerParameters = APIHelper.rejectNilHeaders(nillableHeaders)

        let requestBuilder: RequestBuilder<Void>.Type = OpenAPIClientAPI.requestBuilderFactory.getNonDecodableBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false, headers: headerParameters)
    }

    /**

     - parameter name: (path) Name of the job 
     - parameter body: (body) Job configuration in config.xml format 
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func postJobConfig(name: String, body: String, jenkinsCrumb: String? = nil, completion: @escaping ((_ data: Void?,_ error: Error?) -> Void)) {
        postJobConfigWithRequestBuilder(name: name, body: body, jenkinsCrumb: jenkinsCrumb).execute { (response, error) -> Void in
            if error == nil {
                completion((), error)
            } else {
                completion(nil, error)
            }
        }
    }


    /**
     - POST /job/{name}/config.xml
     - Update job configuration
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (path) Name of the job 
     - parameter body: (body) Job configuration in config.xml format 
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - returns: RequestBuilder<Void> 
     */
    open class func postJobConfigWithRequestBuilder(name: String, body: String, jenkinsCrumb: String? = nil) -> RequestBuilder<Void> {
        var path = "/job/{name}/config.xml"
        let namePreEscape = "\(name)"
        let namePostEscape = namePreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{name}", with: namePostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters = JSONEncodingHelper.encodingParameters(forEncodableObject: body)

        let url = URLComponents(string: URLString)
        let nillableHeaders: [String: Any?] = [
            "Jenkins-Crumb": jenkinsCrumb
        ]
        let headerParameters = APIHelper.rejectNilHeaders(nillableHeaders)

        let requestBuilder: RequestBuilder<Void>.Type = OpenAPIClientAPI.requestBuilderFactory.getNonDecodableBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: true, headers: headerParameters)
    }

    /**

     - parameter name: (path) Name of the job 
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func postJobDelete(name: String, jenkinsCrumb: String? = nil, completion: @escaping ((_ data: Void?,_ error: Error?) -> Void)) {
        postJobDeleteWithRequestBuilder(name: name, jenkinsCrumb: jenkinsCrumb).execute { (response, error) -> Void in
            if error == nil {
                completion((), error)
            } else {
                completion(nil, error)
            }
        }
    }


    /**
     - POST /job/{name}/doDelete
     - Delete a job
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (path) Name of the job 
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - returns: RequestBuilder<Void> 
     */
    open class func postJobDeleteWithRequestBuilder(name: String, jenkinsCrumb: String? = nil) -> RequestBuilder<Void> {
        var path = "/job/{name}/doDelete"
        let namePreEscape = "\(name)"
        let namePostEscape = namePreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{name}", with: namePostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)
        let nillableHeaders: [String: Any?] = [
            "Jenkins-Crumb": jenkinsCrumb
        ]
        let headerParameters = APIHelper.rejectNilHeaders(nillableHeaders)

        let requestBuilder: RequestBuilder<Void>.Type = OpenAPIClientAPI.requestBuilderFactory.getNonDecodableBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false, headers: headerParameters)
    }

    /**

     - parameter name: (path) Name of the job 
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func postJobDisable(name: String, jenkinsCrumb: String? = nil, completion: @escaping ((_ data: Void?,_ error: Error?) -> Void)) {
        postJobDisableWithRequestBuilder(name: name, jenkinsCrumb: jenkinsCrumb).execute { (response, error) -> Void in
            if error == nil {
                completion((), error)
            } else {
                completion(nil, error)
            }
        }
    }


    /**
     - POST /job/{name}/disable
     - Disable a job
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (path) Name of the job 
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - returns: RequestBuilder<Void> 
     */
    open class func postJobDisableWithRequestBuilder(name: String, jenkinsCrumb: String? = nil) -> RequestBuilder<Void> {
        var path = "/job/{name}/disable"
        let namePreEscape = "\(name)"
        let namePostEscape = namePreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{name}", with: namePostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)
        let nillableHeaders: [String: Any?] = [
            "Jenkins-Crumb": jenkinsCrumb
        ]
        let headerParameters = APIHelper.rejectNilHeaders(nillableHeaders)

        let requestBuilder: RequestBuilder<Void>.Type = OpenAPIClientAPI.requestBuilderFactory.getNonDecodableBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false, headers: headerParameters)
    }

    /**

     - parameter name: (path) Name of the job 
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func postJobEnable(name: String, jenkinsCrumb: String? = nil, completion: @escaping ((_ data: Void?,_ error: Error?) -> Void)) {
        postJobEnableWithRequestBuilder(name: name, jenkinsCrumb: jenkinsCrumb).execute { (response, error) -> Void in
            if error == nil {
                completion((), error)
            } else {
                completion(nil, error)
            }
        }
    }


    /**
     - POST /job/{name}/enable
     - Enable a job
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (path) Name of the job 
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - returns: RequestBuilder<Void> 
     */
    open class func postJobEnableWithRequestBuilder(name: String, jenkinsCrumb: String? = nil) -> RequestBuilder<Void> {
        var path = "/job/{name}/enable"
        let namePreEscape = "\(name)"
        let namePostEscape = namePreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{name}", with: namePostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)
        let nillableHeaders: [String: Any?] = [
            "Jenkins-Crumb": jenkinsCrumb
        ]
        let headerParameters = APIHelper.rejectNilHeaders(nillableHeaders)

        let requestBuilder: RequestBuilder<Void>.Type = OpenAPIClientAPI.requestBuilderFactory.getNonDecodableBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false, headers: headerParameters)
    }

    /**

     - parameter name: (path) Name of the job 
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func postJobLastBuildStop(name: String, jenkinsCrumb: String? = nil, completion: @escaping ((_ data: Void?,_ error: Error?) -> Void)) {
        postJobLastBuildStopWithRequestBuilder(name: name, jenkinsCrumb: jenkinsCrumb).execute { (response, error) -> Void in
            if error == nil {
                completion((), error)
            } else {
                completion(nil, error)
            }
        }
    }


    /**
     - POST /job/{name}/lastBuild/stop
     - Stop a job
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (path) Name of the job 
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - returns: RequestBuilder<Void> 
     */
    open class func postJobLastBuildStopWithRequestBuilder(name: String, jenkinsCrumb: String? = nil) -> RequestBuilder<Void> {
        var path = "/job/{name}/lastBuild/stop"
        let namePreEscape = "\(name)"
        let namePostEscape = namePreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{name}", with: namePostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)
        let nillableHeaders: [String: Any?] = [
            "Jenkins-Crumb": jenkinsCrumb
        ]
        let headerParameters = APIHelper.rejectNilHeaders(nillableHeaders)

        let requestBuilder: RequestBuilder<Void>.Type = OpenAPIClientAPI.requestBuilderFactory.getNonDecodableBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false, headers: headerParameters)
    }

    /**

     - parameter name: (path) Name of the view 
     - parameter body: (body) View configuration in config.xml format 
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func postViewConfig(name: String, body: String, jenkinsCrumb: String? = nil, completion: @escaping ((_ data: Void?,_ error: Error?) -> Void)) {
        postViewConfigWithRequestBuilder(name: name, body: body, jenkinsCrumb: jenkinsCrumb).execute { (response, error) -> Void in
            if error == nil {
                completion((), error)
            } else {
                completion(nil, error)
            }
        }
    }


    /**
     - POST /view/{name}/config.xml
     - Update view configuration
     - BASIC:
       - type: http
       - name: jenkins_auth
     - parameter name: (path) Name of the view 
     - parameter body: (body) View configuration in config.xml format 
     - parameter jenkinsCrumb: (header) CSRF protection token (optional)
     - returns: RequestBuilder<Void> 
     */
    open class func postViewConfigWithRequestBuilder(name: String, body: String, jenkinsCrumb: String? = nil) -> RequestBuilder<Void> {
        var path = "/view/{name}/config.xml"
        let namePreEscape = "\(name)"
        let namePostEscape = namePreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{name}", with: namePostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters = JSONEncodingHelper.encodingParameters(forEncodableObject: body)

        let url = URLComponents(string: URLString)
        let nillableHeaders: [String: Any?] = [
            "Jenkins-Crumb": jenkinsCrumb
        ]
        let headerParameters = APIHelper.rejectNilHeaders(nillableHeaders)

        let requestBuilder: RequestBuilder<Void>.Type = OpenAPIClientAPI.requestBuilderFactory.getNonDecodableBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: true, headers: headerParameters)
    }

}
