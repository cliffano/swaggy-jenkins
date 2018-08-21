//
// PipelineBranchesitemlatestRun.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class PipelineBranchesitemlatestRun: JSONEncodable {

    public var durationInMillis: Int32?
    public var estimatedDurationInMillis: Int32?
    public var enQueueTime: String?
    public var endTime: String?
    public var id: String?
    public var organization: String?
    public var pipeline: String?
    public var result: String?
    public var runSummary: String?
    public var startTime: String?
    public var state: String?
    public var type: String?
    public var commitId: String?
    public var _class: String?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["durationInMillis"] = self.durationInMillis?.encodeToJSON()
        nillableDictionary["estimatedDurationInMillis"] = self.estimatedDurationInMillis?.encodeToJSON()
        nillableDictionary["enQueueTime"] = self.enQueueTime
        nillableDictionary["endTime"] = self.endTime
        nillableDictionary["id"] = self.id
        nillableDictionary["organization"] = self.organization
        nillableDictionary["pipeline"] = self.pipeline
        nillableDictionary["result"] = self.result
        nillableDictionary["runSummary"] = self.runSummary
        nillableDictionary["startTime"] = self.startTime
        nillableDictionary["state"] = self.state
        nillableDictionary["type"] = self.type
        nillableDictionary["commitId"] = self.commitId
        nillableDictionary["_class"] = self._class

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

