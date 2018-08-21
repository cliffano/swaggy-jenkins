/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// PipelineBranchesitem
    /// </summary>
    [DataContract]
    public partial class PipelineBranchesitem :  IEquatable<PipelineBranchesitem>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PipelineBranchesitem" /> class.
        /// </summary>
        /// <param name="displayName">displayName.</param>
        /// <param name="estimatedDurationInMillis">estimatedDurationInMillis.</param>
        /// <param name="name">name.</param>
        /// <param name="weatherScore">weatherScore.</param>
        /// <param name="latestRun">latestRun.</param>
        /// <param name="organization">organization.</param>
        /// <param name="pullRequest">pullRequest.</param>
        /// <param name="totalNumberOfPullRequests">totalNumberOfPullRequests.</param>
        /// <param name="_class">_class.</param>
        public PipelineBranchesitem(string displayName = default(string), int? estimatedDurationInMillis = default(int?), string name = default(string), int? weatherScore = default(int?), PipelineBranchesitemlatestRun latestRun = default(PipelineBranchesitemlatestRun), string organization = default(string), PipelineBranchesitempullRequest pullRequest = default(PipelineBranchesitempullRequest), int? totalNumberOfPullRequests = default(int?), string _class = default(string))
        {
            this.DisplayName = displayName;
            this.EstimatedDurationInMillis = estimatedDurationInMillis;
            this.Name = name;
            this.WeatherScore = weatherScore;
            this.LatestRun = latestRun;
            this.Organization = organization;
            this.PullRequest = pullRequest;
            this.TotalNumberOfPullRequests = totalNumberOfPullRequests;
            this.Class = _class;
        }
        
        /// <summary>
        /// Gets or Sets DisplayName
        /// </summary>
        [DataMember(Name="displayName", EmitDefaultValue=false)]
        public string DisplayName { get; set; }

        /// <summary>
        /// Gets or Sets EstimatedDurationInMillis
        /// </summary>
        [DataMember(Name="estimatedDurationInMillis", EmitDefaultValue=false)]
        public int? EstimatedDurationInMillis { get; set; }

        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets WeatherScore
        /// </summary>
        [DataMember(Name="weatherScore", EmitDefaultValue=false)]
        public int? WeatherScore { get; set; }

        /// <summary>
        /// Gets or Sets LatestRun
        /// </summary>
        [DataMember(Name="latestRun", EmitDefaultValue=false)]
        public PipelineBranchesitemlatestRun LatestRun { get; set; }

        /// <summary>
        /// Gets or Sets Organization
        /// </summary>
        [DataMember(Name="organization", EmitDefaultValue=false)]
        public string Organization { get; set; }

        /// <summary>
        /// Gets or Sets PullRequest
        /// </summary>
        [DataMember(Name="pullRequest", EmitDefaultValue=false)]
        public PipelineBranchesitempullRequest PullRequest { get; set; }

        /// <summary>
        /// Gets or Sets TotalNumberOfPullRequests
        /// </summary>
        [DataMember(Name="totalNumberOfPullRequests", EmitDefaultValue=false)]
        public int? TotalNumberOfPullRequests { get; set; }

        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class", EmitDefaultValue=false)]
        public string Class { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PipelineBranchesitem {\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
            sb.Append("  EstimatedDurationInMillis: ").Append(EstimatedDurationInMillis).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  WeatherScore: ").Append(WeatherScore).Append("\n");
            sb.Append("  LatestRun: ").Append(LatestRun).Append("\n");
            sb.Append("  Organization: ").Append(Organization).Append("\n");
            sb.Append("  PullRequest: ").Append(PullRequest).Append("\n");
            sb.Append("  TotalNumberOfPullRequests: ").Append(TotalNumberOfPullRequests).Append("\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as PipelineBranchesitem);
        }

        /// <summary>
        /// Returns true if PipelineBranchesitem instances are equal
        /// </summary>
        /// <param name="input">Instance of PipelineBranchesitem to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PipelineBranchesitem input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.DisplayName == input.DisplayName ||
                    (this.DisplayName != null &&
                    this.DisplayName.Equals(input.DisplayName))
                ) && 
                (
                    this.EstimatedDurationInMillis == input.EstimatedDurationInMillis ||
                    (this.EstimatedDurationInMillis != null &&
                    this.EstimatedDurationInMillis.Equals(input.EstimatedDurationInMillis))
                ) && 
                (
                    this.Name == input.Name ||
                    (this.Name != null &&
                    this.Name.Equals(input.Name))
                ) && 
                (
                    this.WeatherScore == input.WeatherScore ||
                    (this.WeatherScore != null &&
                    this.WeatherScore.Equals(input.WeatherScore))
                ) && 
                (
                    this.LatestRun == input.LatestRun ||
                    (this.LatestRun != null &&
                    this.LatestRun.Equals(input.LatestRun))
                ) && 
                (
                    this.Organization == input.Organization ||
                    (this.Organization != null &&
                    this.Organization.Equals(input.Organization))
                ) && 
                (
                    this.PullRequest == input.PullRequest ||
                    (this.PullRequest != null &&
                    this.PullRequest.Equals(input.PullRequest))
                ) && 
                (
                    this.TotalNumberOfPullRequests == input.TotalNumberOfPullRequests ||
                    (this.TotalNumberOfPullRequests != null &&
                    this.TotalNumberOfPullRequests.Equals(input.TotalNumberOfPullRequests))
                ) && 
                (
                    this.Class == input.Class ||
                    (this.Class != null &&
                    this.Class.Equals(input.Class))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.DisplayName != null)
                    hashCode = hashCode * 59 + this.DisplayName.GetHashCode();
                if (this.EstimatedDurationInMillis != null)
                    hashCode = hashCode * 59 + this.EstimatedDurationInMillis.GetHashCode();
                if (this.Name != null)
                    hashCode = hashCode * 59 + this.Name.GetHashCode();
                if (this.WeatherScore != null)
                    hashCode = hashCode * 59 + this.WeatherScore.GetHashCode();
                if (this.LatestRun != null)
                    hashCode = hashCode * 59 + this.LatestRun.GetHashCode();
                if (this.Organization != null)
                    hashCode = hashCode * 59 + this.Organization.GetHashCode();
                if (this.PullRequest != null)
                    hashCode = hashCode * 59 + this.PullRequest.GetHashCode();
                if (this.TotalNumberOfPullRequests != null)
                    hashCode = hashCode * 59 + this.TotalNumberOfPullRequests.GetHashCode();
                if (this.Class != null)
                    hashCode = hashCode * 59 + this.Class.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
